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
	t_node	*a;

	a = parse(ac, av);

	if (!is_sorted(a))
		sort(&a); // CONTINUAR 

	show_nodes(a);
	free_nodes(&a);
	//printf("%ld", sizeof(t_node));

}
