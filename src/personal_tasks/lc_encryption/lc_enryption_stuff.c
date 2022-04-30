#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main_to_do()
{
    const int size = 1024;
    char key[size];
    char msg[size];
	
    int i = 0;
    int len_key = 0;
    int len_msg = 0;

    fgets(msg, size, stdin);
    fgets(key, size, stdin);

    len_key = strlen(key);
    len_msg = strlen(msg);

    print_mem(msg, len_msg, 16);
    printf("\n");

    print_mem(msg, len_msg, 16);

    return 0;
}