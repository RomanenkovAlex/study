#include "../../inc/lc_list.h"
#include <stdio.h>

t_node *lc_list_push_back(t_node *head, t_node *pointer, t_node *data)
{
    if (head == NULL)
	{
		head->next = NULL;
	}

    if (data == NULL || pointer->next->next == NULL)
    {
        return head;
    }
    else
    {
        data->next = pointer;
        pointer->next = data;
        data->next = pointer;
        return head;
    }
}
