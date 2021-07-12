#include <unistd.h>

void	error(void)
{
	write(1, "Error\n", 6);
}
