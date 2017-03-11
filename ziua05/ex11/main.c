#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_str_is_uppercase(char *str);

int main ()
{
	char str[] = "AAAAgghf";
	char	*p;	

	p = str;
	printf("%d", ft_str_is_uppercase(p));
	return (0);
}
