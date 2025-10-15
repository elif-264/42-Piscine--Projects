#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int i;
	char *dest;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = (char*)malloc(i + 1);
	if (!dest)
	{
		return (0);
	}

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	printf("%s", ft_strdup("dfghjk"));
}
