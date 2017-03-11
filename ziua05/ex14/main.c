#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_str_is_printable(char *str);

int main ()
{
	char str[] = "AAAAgghf";
	char	*p;	

	str[4] = 25;
	p = str;
	printf("%d", ft_str_is_printable(p));
	return (0);
}
