#include <unistd.h>

int _putchar(int m)
{
	return (write(1, &m, 1));
}
