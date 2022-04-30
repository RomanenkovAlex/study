// getopt()
// getopt_long()

// ls -l -a -s
// ls -las
// head -n 5
// -h -> help
// --help

#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>
#include <lc_math.h>

void show_args(int argc, char** argv)
{
	printf("%d\n", argc);
	for (int i = 0; i < argc; ++i)
		printf("argv[%d]: \"%s\"\n", i, argv[i]);
}

void usage(const char *name)
{
	printf("Usage: %s [OPTIONS] number\n"
		"OPTIONS:\n"
			"\t-p\t- check prime number\n"
			"\t-c\t- canonical decomposition\n"
			"\t-a\t- amount of divisors\n"
			"\t-s\t- sum of divisors\n"
			"\t-h\t- print this help\n", name);
}

int payload(int argc, char **argv, int check_prime, int get_canonical,
		int get_divisors_amount, int get_divisors_sum)
{
	int n = 0;
	int *res;
	size_t size = 0;

	for (int i = optind; i < argc; ++i)
	{
		n = atoi(argv[i]);

		if (check_prime)
			printf("The number %d is%sprime\n",
				n, (is_prime(n) ? " " : " not "));
		
		if (get_canonical)
		{
			res = canonical(n, &size);
			printf("Canonical: ");
			for (size_t j = 0; j < size; ++j)
				printf("%d ", res[j]);
			printf("\n");
			free(res);
		}

		if (get_divisors_amount)
			printf("Divisors amount: %zu\n", count_divisors(n));
		if (get_divisors_sum)
			printf("Divisors amount: %zu\n", sum_divisors(n));

		if (i + 1 < argc)
			printf("\n");
	}
	return 0;
}

// usage: math [-p] [-c] [-a] [-s] [-h] [-r] number ...
// p - check prime number
// c - canonical
// a - amount of divisors
// s - sum of divisors
// h - help
// r - resheto eratosphena
int main(int argc, char *argv[])
{
	int opt;
	int check_prime = 0;
	int get_canonical = 0;
	int get_divisors_amount = 0;
	int get_divisors_sum = 0;

   	while ((opt = getopt(argc, argv, "pcash")) != -1)
	{
		switch (opt)
		{
		case 'p': check_prime = 1; break;
		case 'c': get_canonical = 1; break;
		case 'a': get_divisors_amount = 1; break;
		case 's': get_divisors_sum = 1; break;
		case 'h':
		default: /* '?' */
		   usage(argv[0]);
		   return 0;
		}
	}
	
	if (optind >= argc)
	{
		fprintf(stderr, "Expected argument after options\n");
		return -1;
	}

	return payload(argc, argv, check_prime, get_canonical,
		get_divisors_amount, get_divisors_sum);
}