int	ft_atoi(const char *str)
{
	int i = 0;
	int pn = 1;
	int ret = 0;

	while(str[i] == 32 || str[i] >= 9 && str[i] <= 13)
	{
		i++;
	}
	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		{
			pn = -pn;
		}
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		ret = (str[i] - 48) + (ret * 10);
		i++;
	}
	return (ret * pn);	
}

//test

#include <stdio.h>
int main()
{
	const char s[] = "    ---31d234asd123";

	printf("%d", ft_atoi(s));
}
