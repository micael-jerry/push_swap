#include "push_swap.h"

void free_list(t_list_int **list)
{
	t_list_int *element;
	t_list_int *tmp;

	element = list[0];
	while (element)
	{
		tmp = element;
		element = element->next;
		free(tmp);
	}
	free(list);
}