


#include <stdio.h>

int	ft_recursive_factorial(int nb)

{
	if( nb < 0)
	{
		return (0);
	}

{
	if(nb == 0 || nb ==1)
	{
		return (1);
	}
}
	return nb * ft_recursive_factorial(nb -1);
}
int main()
{
	printf(" le factorielle de 5 est %d", ft_recursive_factorial(5));
}
	
