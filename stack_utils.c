#include "push_swap.h"

t_node	*newnode(int number)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if(!node)
		return (NULL);
	node->number = number;
	node->previous = NULL;
	node->next = NULL;
	return (node);
}

t_node	*get_lastnode(t_node *node)
{
	t_node	*last;

	if (NULL == node)
		return (NULL);
	last = node;
	while (NULL != last->next)
		last = last->next;
	return (last);
}

t_node	*get_firstnode(t_node *node)
{
	t_node	*first;

	if (NULL == node)
		return (NULL);
	first = node;
	while (NULL != first->previous)
		first = first->previous;
	return (first);
}

int	stack_len(t_node *node)
{
	t_node	*current;
	int	i;

	if (NULL == node)
		return (0);
	i = 0;
	current = get_firstnode(node);

	while (NULL != current)
	{
		i++;
		current = current->next;
	}
	return (i);
}

