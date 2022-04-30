#include "../../inc/lc_list.h"

void comp(void *data)
{
	int *res = (int*)data;
	*res += 1;
}

void lc_list_foreach(t_node *head, void (*comp)(void *))
{
    while (head->next)
	{
		comp(head->data);
	}
}
