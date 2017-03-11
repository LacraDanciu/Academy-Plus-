#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int main ()
{
	char str[] = "salut, ce faci? 42cuvinte patruzeci-doi; cincizeci+si+unu";
	char	*p;	

	p = str;
	printf("%s", ft_strcapitalize(p));
	return (0);
}
