int ft_strlen(char *str)
{
	int	i = 0;
	while(str[i] != 0)
	{
		i++;
	}
	return (i);
}


// test
#include <stdio.h>
int main()
{
	char str[] = "serhatozbek";
	printf("%d", ft_strlen(str));
}
