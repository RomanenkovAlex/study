#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#include <lc_string.h>
#include <lc_math.h>

enum e_errors {
	E_OK = 0,
	E_CPAM,	//ошибка с кол-вом параметров
	E_IPAM	//ошибка со значением параметров
};

const char* get_error(int err)
{
	const char *errors[] = {
		"OK"
		"incorrect parameters amount",
		"incorrect parameter",
	};
	static const size_t size = sizeof(errors) / sizeof(char*);
	if (err < 0 || err > size)
		return NULL;
	return errors[err];
}

int main_old(int argc, char **argv, char **envp)
{
	char *pend = NULL;
	double num = 0;

	if (argc != 2)
	{
		printf("%s: %s\n", argv[0], get_error(E_CPAM));
		return -1;
	}
	else
	{
		num = strtod(argv[1], &pend);
		if (*pend != 0)
		{
			
		}
		is_prime(num);
	}
	return 0;
}


/*
(void)envp;

	printf("argc = %d\n", argc);

	for (int i = 0; i < argc; ++i)
		printf("argv[%i] = %s\n", i, *(argv + i)); // argv[i]

*/

// list
// stack
// queue
// btree
// FILE
// getopt