#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <ctype.h>

typedef struct {
	char **table;
	size_t size;
	char move;
	char c_cross;
	char c_zero;
	char c_fill;
} t_playing_field;

t_playing_field* init_game(int size, char cross_char,
        char zero_char, char fill_char, int win_amount)
{
	t_playing_field *game = malloc(sizeof(t_playing_field));
	if (!game ||
		!(game->table = (char**)malloc(size * sizeof(char*))))
		return NULL;
	game->c_cross = cross_char;
	game->c_zero = zero_char;
	game->c_fill = fill_char;
	game->move = game->c_cross;
	game->size = size;

	for (size_t i = 0; i < game->size; ++i)
	{
		game->table[i] = (char*)malloc(game->size * sizeof(char));
		if (!game->table[i])
		{
			for (size_t j = 0; j < i; ++j)
				free(game->table[j]);
			free(game->table);
			game->table = NULL;
			return NULL;
		}
		for(size_t j = 0; j < game->size; ++j)
			game->table[i][j] = game->c_fill;
	}
	return game;
}

void show_game_table(t_playing_field *game)
{
	if (!game || !game->table)
		return ;
	
 	for(size_t i = 0; i < game->size; ++i)
	{
		for (size_t j = 0; j < game->size; ++j)
			printf("| %c ", game->table[i][j]);
		printf("|\n");
	}
}

void move(t_playing_field *game)
{
	int row = -1;
	int col = -1;

	if (!game || !game->table)
		return ;
	printf("Player '%c' turn:", game->move);
	while (scanf("%d %d", &row, &col) != 2
		|| !(0 <= row && row < game->size)
		|| !(0 <= col && col < game->size)
		|| game->table[row][col] != game->c_fill)
	{
		// int c;
		// while ((c = getchar()) != EOF) ;
		fflush(stdin);
		printf("Incorrect input!\nPlayer '%c' turn:", game->move);
	}
	game->table[row][col] = game->move;
}

int check_win(t_playing_field *game)
{   
    int row = 1;
    int col = 1;

	if (!game || !game->table)
		return 0;
	for (size_t i = 0; i < game->size; ++i)
	{
		if (game->table[i][i] != game->move)
			row = 0;
		if (game->table[i][game->size - 1 - i] != game->move)
			col = 0;
	}
	if (row || col)
		return 1;
	for (size_t i = 0; i < game->size; ++i)
	{
		row = 1;
		col = 1;
		for (size_t j = 0; j < game->size; ++j)
		{
			if (game->table[i][j] != game->move)
				row = 0;
			if (game->table[j][i] != game->move)
				col = 0;
		}
		if (row || col)
			return 1;
	}
    return 0;
}

int end_game(t_playing_field *game)
{
	if (!game || !game->table)
		return 1;
	for (size_t i = 0; i < game->size; ++i)
		for (size_t j = 0; j < game->size; ++j)
			if (game->table[i][j] == game->c_fill)
				return 0;
	return 1;
}

char game(int size, char cross_char,
        char zero_char, char fill_char, int win_amount)
{
	t_playing_field *game = init_game(size,
        cross_char, zero_char, fill_char, win_amount);

	while (!end_game(game))
	{
		show_game_table(game);
		move(game);
		if (check_win(game))
			return game->move;
		game->move = (game->move == game->c_cross) ?
			game->c_zero : game->c_cross;
	}
	return 'D';
}
// usage: ./prog [OPTIONS]...
// OPTIONS:
// -n size
// -c cross_char  символ крестика
// -z zero_char   символ нолика
// -f fill_char   -
// -w win_amount  количество побед

void usage(char *name)
{
    printf("usage: %s [OPTIONS]...\n\n", name);
    printf("OPTIONS:\n"
        "\t-n size\t\t\tfield size\n"
        "\t-c cross_char\tcross char\n"
        "\t-z zero_char\tzero char\n"
        "\t-f fill_char\tfill char\n"
        "\t-w win_amount\twin amount\n");
}

int main(int argc, char **argv)
{	
	char cross_char = 'X';
	char zero_char = '0';
	char fill_char = ' ';
	int size = 3;
	int win_amount = 3;
    int opt = 0;
    int ret = 0;

    while ((opt = getopt(argc, argv, "n:c:z:f:w:")) != -1)
    {
        switch (opt)
        {
        case 'n':
            size = atoi(optarg);
            break;
        case 'c':
            cross_char = isprint(optarg[0]) ? optarg[0] : 'X';
            break;
        case 'z':
            zero_char = isprint(optarg[0]) ? optarg[0] : '0';
            break;
        case 'f':
            fill_char = isprint(optarg[0]) ? optarg[0] : ' ';
            break;
        case 'w':
            win_amount = atoi(optarg); 
            break;
        default:
            usage(argv[0]);
            return -1;
        }
    }

    if (size >= 3 && win_amount <= size && win_amount >= 3)
	    printf("The winner is - %c\n",
                game(size, cross_char,
                    zero_char, fill_char, win_amount));
    else
    {
        usage(argv[0]);
        ret = -1;
    }
    return ret;
}
