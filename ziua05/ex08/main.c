#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

int main ()
{
	char str[] = "";
	char	*p;	

	p = str;
	printf("%d", ft_str_is_alpha(p));
	return (0);
}
