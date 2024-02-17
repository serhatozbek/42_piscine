#include <stdio.h>
int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;
	len = ft_strlen(str) - 1;
	i = 0;

	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}
int main()
{
	char s[] = "serhat";
	printf("%s", ft_strrev(s));
}
