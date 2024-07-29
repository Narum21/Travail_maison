

#include <stdio.h>

char	ft_strlen(char *str)

{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int	main(void)

{
	char str[] = "ouifesq6non";
	printf("Il y a %d caractères", ft_strlen(str));
}
