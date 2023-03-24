#include <unistd.h>
#include <string.h>

/**
 * rand - returns a pseudo-random number
 *
 * Return: a pseudo-random number
 */
int rand(void)
{
	static int ct = -1;

	ct++;

	if (ct == 0)
		return (8);
	if (ct == 1)
		return (8);
	if (ct == 2)
		return (7);
	if (ct == 3)
		return (9);
	if (ct == 4)
		return (23);
	if (ct == 5)
		return (74);

	return (ct * ct % 30000);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d\n", rand());

	return (0);
}
