void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

//test
#include <stdio.h>
int main()
{
	int a = 10;
	int	b = 20;
	ft_swap(&a,&b);
	printf("a :%d\nb :%d", a, b);
}
