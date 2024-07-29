

#include <stdio.h>

int	ft_iterative_power(int nb, int power)

{
	int i;
	i = 1;
	int res;
	res = 1;
	if(power < 0)
	{
		return (0);
	}
	if(nb == 0 && power ==0)
	{
		return (1);
	}
	
	while(i <= power - 1)
	{
		res = res * nb;
		i++;
	}
	return res * nb;
}
int main(void)

{

	printf("%d", ft_iterative_power(3, 10));
}


