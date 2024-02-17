#include <unistd.h>

int adab(char *str, char c)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == c)
		{	
			return(0);
		}
		i++;
	}
	return(1);
}

int adaa(char *str, char c, int pos)
{
	int i = 0;

	while(i < pos)
	{
		if(str[i] == c)
		{	
			return(0);
		}
		i++;
	}
	return(1);
}

void ft_union(char *av1, char *av2)
{
	int i = 0;
	while(av1[i] != '\0')
	{
		if(adaa(av1, av1[i], i) == 1)
		{
			write(1, &av1[i], 1);
		}
		i++;
	}

	i = 0;

	while (av2[i] != '\0')
	{
		if(adab(av1, av2[i]) == 1)
		{	
			if(adaa(av2, av2[i], i) == 1)
			{
				write(1, &av2[i], 1);
			}
		}
		i++;
	}
}
int main(int ac, char **av)
{
	if(ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	write(1, "\n", 1);
}
