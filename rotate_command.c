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

void	ra(t_node **a, int checker)
{
	rotate(a);
	if (!checker)
		write(1, "ra\n", 3);
}

void	rb(t_node **b, int checker)
{
	rotate(b);
	if (!checker)
		write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b, int checker)
{
	rotate(a);
	rotate(b);
	if (!checker)
		write(1, "rr\n", 3);
}
