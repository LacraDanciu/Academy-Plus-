#include <stdlib.h>
#include <stdio.h>
int ft_is_sort(int *tab, int length, int(*f)(int, int));

int check(int a, int b)
{
	return (a - b);
}

int main()
{
	int a[10] = {};
	printf("%d", ft_is_sort(a, 0, &check));
	return 0;
}
