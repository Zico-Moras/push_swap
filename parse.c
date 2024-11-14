#include "push_swap.h"

void	free_str(char **str)
{
	int	i;
	
	i = 0;
	while (str[i])
		free(str[i++]);
}

t_node	*parse(int ac, char **av)
{
	t_node	*a;
	char	**holder;

	a = NULL;
	if (ac < 2)
		error();
	else if (2 == ac)
	{
		holder = ft_split(av[1], ' ');
		stack_init(holder, &a);
		free_str(holder);
		free(holder);
	}
	else
		stack_init(av + 1, &a);
	return (a);
}
