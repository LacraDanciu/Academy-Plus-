#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_str_is_numeric(char *str);

int main ()
{
	char str[] = "123gggh4485";
	char	*p;	

	p = str;
	printf("%d", ft_str_is_numeric(p));
	return (0);
}
