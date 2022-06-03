#include "../../inc/lc_list.h"
#include <stdio.h>

t_node *lc_list_push_front(t_node *head, void *data, t_node *pointer)
{
	if (data == NULL || pointer->next == NULL)
    {
        return head;
    }
    else
    {
        head = lc_list_push_back(head, lc_list_find(head, , pointer), data);
        return head;
    }
}
