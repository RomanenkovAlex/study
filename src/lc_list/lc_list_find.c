#include "../../inc/lc_list.h"
#include <stdio.h>

int comp(void* a, void* b)
{
	int* a_c = (int*)a;
	int* b_c = (int*)b;

	return (*a_c == *b_c);
}

t_node* lc_list_find(const t_node *head, void *data, int (*comp)(void *, void *))
{
	t_node* cur_list = (t_node*)head;

	if (cur_list == NULL)
	{
		printf("Empty list\n");
		return NULL;
	}
	
	while (cur_list != NULL)
	{
		if (comp(cur_list->data, data) != 0)
		{
			printf("Element found\n");
			return cur_list;
		}
		cur_list = cur_list->next;
	}

	return NULL;
}