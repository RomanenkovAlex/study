#include "../../inc/lc_list.h"
#include <stdlib.h>

t_node *lc_list_create_node(void *data)
{
	t_node *pointer = (t_node*)malloc(sizeof(t_node));
	data = pointer->data;
	return pointer;
}
