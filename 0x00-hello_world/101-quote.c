#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
ssize_t n;
n = write(STDERR_FILENO,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
59);
if (n == -1)
return (1);
return (0);
}
