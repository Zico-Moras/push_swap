#include "push_swap.h"

static void	reverse_rotate(t_node **node)
{
	int	len;
	t_node	*last;

	len = stack_len(*node);
	if (NULL == *node || 1 == len)
		return ;
	last = get_lastnode(*node);
	last->previous->next = NULL;
	last->next = *node;
	last->previous = NULL;
	*node = last;
	(*node)->next->previous = *node;
}

void	rra(t_node **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}
