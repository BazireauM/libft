#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, int n)
{
	int	i;
	char *test = s;
	
	i = 0;
	while (i < n)
	{
		test[i] = '0' + c;
		i++;
	}
	test[i] = '\0';
	return (test);
}

void main()
{
	char b[4];
	memset (b, 48, 2);
	printf("%s",b);
	char c[4];
	ft_memset (c, 48, 2);
	printf("%s",c);
}
