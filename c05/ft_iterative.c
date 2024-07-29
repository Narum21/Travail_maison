

#include <stdio.h>

int	ft_iterative_factorial(int nb)

{
	int i;
	int resultat = 1;
	if(nb < 2147483647 && nb > 0)
	{
		for(i = 1; i <= nb; i++)
		{
			resultat *= i;
		}
		return (resultat);
	}
	return (0);
}
int main(void)

{
	int	nb = -4;
	int resultat = ft_iterative_factorial(nb);
	printf("le factorielle de %d est %d", nb, resultat);
	return 0;
}
