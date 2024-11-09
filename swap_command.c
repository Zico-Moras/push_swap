#include "push_swap.h"

static void	swap(t_node **node)
{
	int	len;
	
	len = stack_len(*node);
	if (NULL == *node || NULL == node || 1 == len)
		return ;

	*node = (*node)->next;
	(*node)->previous->previous = (*node);
	(*node)->previous->next = (*node)->next;
	if (NULL != (*node)->next)
		(*node)->next->previous = (*node)->previous;
	(*node)->next = (*node)->previous;
	(*node)->previous = NULL;
}

void	sa(t_node **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}