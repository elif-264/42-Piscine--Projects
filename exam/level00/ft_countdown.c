#include <unistd.h>

int	main(void)
{
	char	x;

	x = '9';
	while (x >= '0')
	{
		write(1, &x, 1);
		x--;
	}
	write(1, "\n", 1);
	return (0);
}
