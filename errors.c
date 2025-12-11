#include <stdlib.h>
#include <unistd.h>

void args_error(void)
{
	write(1, "Error\n", 6);
	exit(1);	
}
