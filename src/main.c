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

int main(/*int argc, char *argv[]*/)
{
	// WORK WITH FILES
	
	// OS resources
	// - Linux (kernel - syscalls)
	// - Windows (WINAPI)
	
	// Libraries
	// stdio

	// r w a
	// r+ w+ a+
	// t b
	// size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream)
	
	FILE *fp = fopen("Makefile", "r");
	char buf[BUFSIZ];
	int len = 0;
	
while (!feof(fp))
	++len;

	
for (int j = 0; j < len / 2; ++j) // вывод 1 половины файла
	{
		fread(buf, 1, 1, fp);
		printf("%c", buf[0]);
	}

	j = len;

for (int j = 0; j / 2 < len; ++j) // вывод 2 половины файла
	{
		fread(buf, 1, 1, fp);
		printf("%c", buf[0]);
	}
		//fread(buf, 1, 1, fp);
		//printf("%c", buf[0]);
	
	// fopen
	// fclose
	// fread
	// fwrite
	// fseek
	// fscanf
	// fprintf
	
	return 0;
}