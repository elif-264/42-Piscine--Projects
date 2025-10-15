#include<unistd.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_rev_print (char *str)
{
	int i;
	int len;
	int temp;

	i = 0;
	len = ft_strlen(str);
	len--;
	while (i <len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	ft_putstr(str);
	return (str);
}

int	main(void)
{
	char str[] = "deneme";
	ft_rev_print(str);
}
