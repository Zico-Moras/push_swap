#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define INT_MAX 2147483647
# define INT_MIN (-2147483648)

//includes
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>




//structs
typedef struct s_node {
	int	number;
	struct	s_node	*next;
	struct	s_node	*previous;
}	t_node;



//functions
char	**ft_split(const char *s, char c);
long	ft_atol(const char *s);
void	free_nodes(t_node **a);
void	stack_init(char **holder, t_node **a);
int	error_repetition(int number, t_node *a);
void	add_to_stack(int number, t_node **a);
void	show_nodes(t_node *a);
//PARSE
t_node	*parse(int ac, char **av);
void	free_str(char **str);
//stack_utils
void	error();
t_node	*newnode(int number);
t_node	*get_lastnode(t_node *node);
t_node	*get_firstnode(t_node *node);
int	stack_len(t_node *node);
t_node	*get_highestnode(t_node *node);
//intructions
//SWAP
void	sa(t_node **a, int checker);
void	sb(t_node **b, int checker);
void	ss(t_node **a, t_node **b, int checker);
//PUSH
void	push_a(t_node **b, t_node **a, int checker);
void	push_b(t_node **a, t_node **b, int checker);
//ROTATE
void	ra(t_node **a, int checker);
void	rb(t_node **b, int checker);
void	rr(t_node **a, t_node **b, int checker);
//REVERSE_ROTATE
void	rra(t_node **a, int checker);
void	rrb(t_node **b, int checker);
void	rrr(t_node **a, t_node **b, int checker);
//algorithm
int	is_sorted(t_node *a);
void	sort(t_node **a);
void	tiny_sort(t_node **a);
#endif
