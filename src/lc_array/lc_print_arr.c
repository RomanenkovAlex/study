#include <stdio.h>
#include <stdlib.h>

struct s_node
{
    double data;
    int color;
};

typedef struct s_node t_node;
typedef int t_array;
#define FMT "%d "

void print_arr(t_array *arr, const size_t size)
{
	for (size_t i = 0; i < size; ++i)
		printf(FMT, arr[i]);
	puts("\n");
}