#include <stdio.h>
#include <stdlib.h>

// void fill_arr(void *arr,
// 				size_t size,
// 				size_t count,
// 				void (*fill_item)(void *))
// arr - array pointer
// size - размер одного эл.
// count - размер массива.
// fill_arr - function pointer for fill element


struct s_node
{
    double data;
    int color;
};

typedef struct s_node t_node;
typedef int t_array;
#define FMT "%d "

void fill(t_array *arr, const size_t size)
{
	for (size_t i = 0; i < size; ++i)
		arr[i] = rand() % 100;
}