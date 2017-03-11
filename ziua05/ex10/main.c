#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_str_is_lowercase(char *str);

int main ()
{
	char str[] = "gggh";
	char	*p;	

	p = str;
	printf("%d", ft_str_is_lowercase(p));
	return (0);
}
