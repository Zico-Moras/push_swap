#include "push_swap.h"
/*


   varios argumentos
   ./push_swap 14 5 098 8 "-2  24 24  444"  0

	output:  sa rb ra pa pb

   so um argumento
   ./push_swap  "2494 24 49 -2 -3 5 0"

   tem que ser ints
   numeros positivos e negativos
   numeros nao podem ser repetidos

   comeca odernado de cima para baixo

   > ./push_swap "5 3 2"

   5
   3
   2



   STACK B comeca vazio
*/
int	main(int ac, char **av)
{
	char	**holder;
	t_node	*a;
	//t_node	*b;

	int	i;
	a = NULL;
	//b = NULL;

	if (1 == ac || !av[1][0])
		write(2, "Error\n", 6);
	else if (2 == ac)
	{
		holder = ft_split(av[1], ' ');
		stack_init(holder, &a);
	}




	ra(&a);
	ra(&a);
	show_nodes(a);
	free_error(&a);
	i = 0;
	while (holder[i])
	{
		free(holder[i]);
		i++;
	}
	free(holder);
	//printf("%ld", sizeof(t_node));

}
