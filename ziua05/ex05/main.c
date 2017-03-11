#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strupcase(char *str);

int main ()
{
	char str[] = "aDFGHADvhdfhgjfd4546AAAAAAAIJWLFJ";
	char *p;
	
	p = str;
	printf("%s\n", ft_strupcase(p));
	return (0);
}
