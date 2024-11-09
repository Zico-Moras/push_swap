#include "push_swap.h"

void	show_nodes(t_node *a)
{
	t_node	*current;

	current = get_firstnode(a);
	while (NULL != current)
	{
		printf("%d\n", current->number);
		current = current->next;
	}

}
void free_error(t_node **a)
{
    t_node *current = get_firstnode(*a);
    t_node *next_node;

    while (current != NULL)
    {
        next_node = current->next;
        free(current);
        current = next_node;
    }
    *a = NULL; // Set the head pointer to NULL after freeing the list
}


void	add_to_stack(int number, t_node **a)
{
	t_node	*new_node;
	t_node	*current;

	if (NULL == a)
		return ;
	new_node = newnode(number);
	if (NULL == new_node)
		return ;
	if (NULL == *a)
		*a = new_node;
	else
	{
		current = get_lastnode(*a);
		current->next = new_node;
		new_node->previous = current;
	}
}
int	error_checker(long number, t_node **a)
{
	t_node *current;

	current = *a;
	if (number < INT_MIN || number > INT_MAX)
		return (1);
	while (NULL != current)
	{
		if (number == current->number)
			return (1);
		current = current->next;
	}
	return (0);
}
void	stack_init(char **holder, t_node **a)
{

	long	number;
	int	i;


	i = 0;
	while (holder[i])
	{
		number = ft_atol(holder[i++]);
		if (error_checker(number, a))
		{
			free_error(a);
			write(STDERR_FILENO, "Error\n", 6);
		}
		else
			add_to_stack((int)number, a);
	}

}

