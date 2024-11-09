#include "push_swap.h"

static void	rotate(t_node **node)
{
	t_node	*last;
	int	len;

	len = stack_len(*node);
	if (NULL == *node || 1 == len)
		return ;
	last = get_lastnode(*node);
	last->next = *node;
	*node = (*node)->next;
	(*node)->previous = NULL;
	last->next->next = NULL;
	last->next->previous = last;
}

void	ra(t_node **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_node **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
