#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main()
{
	char s[] = "serhatttt";
	int i = ft_strlen(s);
	printf("%d", i);
}
