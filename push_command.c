#include "push_swap.h"

static void	push(t_node **src, t_node **dest)
{
	t_node	*node_to_push;
	if (NULL == *src)
		return ;
	node_to_push = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->previous = NULL;
	node_to_push->next = *dest;
	if (*dest)
		(*dest)->previous = node_to_push;
	*dest = node_to_push;
}

void	push_a(t_node **b, t_node **a, int checker)
{
	push(b, a);
	if (!checker)
		write (1, "pa\n", 3);
}

void	push_b(t_node **a, t_node **b, int checker)
{
	push(a, b);
	if (!checker)
		write (1, "pb\n", 3);
}
