#include "../../inc/lc_list.h"
#include <stdio.h>
#include <string.h>

void lc_list_insert(t_node *head, void *data)
{
	t_node* cur_list = (t_node*)head;
	
	if (head == NULL)
	{
		return;
	}
	
	while (cur_list->next != NULL)
		{
			cur_list = cur_list->next;
		}
	cur_list->next->data = memcpy(cur_list->next->data, data, 100);
}
