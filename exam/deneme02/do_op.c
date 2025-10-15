#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	main(int ac, char **av)
{
	int	first;
	int	second;
	int	result;
	char	op;
	
	result = 0;
	first = atoi(av[1]);
	second = atoi(av[3]);
	op = av[2][0];
	if (ac == 4)
	{
		if (op == '+')
			result = first + second;
		else if (op == '-')
			result = first - second;
		else if (op == '*')
			result = first * second;
		else if (op == '/')
			result = first / second;
		else if (op == '%')
			result = first % second;
		printf("%d\n", result);	
	}
	else 
		write(1, "\n", 1);
	return (0);
}
