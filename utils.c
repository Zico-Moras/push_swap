#include "push_swap.h"

static int	ft_isdigit(const char c)
{
	if (c > '0' && c < '9')
		return (1);
	return (0);
}

long	ft_atol(const char *s)
{
	int	sign;
	long	number;

	number = 0;
	sign = 1;
	if ('-' == *s || '+' == *s)
	{
		if ('-' == *s)
			sign = -1;
		s++;
	}
	while (ft_isdigit(*s))
	{
		number *= 10;
		number = number + *s - '0';
		s++;
	}
	return (number * sign);
}
