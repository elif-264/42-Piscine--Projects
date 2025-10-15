#include <unistd.h>

void	inter(char *str, char *str1)
{
	int i;
	int j;

	while (str[i])
	{
		j = i - 1;
		while (j >= 0)
		{
			if (str[i] == str[j])
				break;
			j--;
		}
		if (j == -1)
		{
			j = 0;
			while (str1[j])
			{
				if (str[i] == str1[j])
				{
					write(1, &str[i], 1);
					break ;
				}
				j++;
			}
		}
		i++;
	}
}

int main(int ac, char **av)
{
	(void) ac;
	inter(av[1], av[2]);
	return (0);
}
