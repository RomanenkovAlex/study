#include "../../inc/lc_list.h"
#include <stdio.h>
#include <stdlib.h>

void lc_list_remove(t_node *head)
{
	t_node *curr = head;
	t_node *next = NULL;

	while (curr != NULL) 
    {
        next = curr->next;
        free(curr);
        curr = next;
    }
    return;
}
