#include "../../inc/lc_list.h"
#include <stdio.h>

t_node *lc_list_last(t_node *head)
{
	if (head == NULL)
	{
		head->next = NULL;
	}
	
	while (head->next)
		{
			head = head->next; 
		}
}
