#include<stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char	*ft_strdup(char *src)
{
	int	i;
	int	len;
	int	s;

	i = 0;
	len = ft_strlen(src);
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
