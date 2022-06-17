#include "palindrome.h"

/**
 * is_palindrome - This function check is a number is palindrome.
 *
 * Return: 1 or 0.
 * @n: number to check.
 */
int is_palindrome(unsigned long n)
{
	unsigned long rev = 0, digit, cpy_n = n;

	while (cpy_n != 0)
	{
		digit = cpy_n % 10;
		rev = rev * 10 + digit;
		cpy_n /= 10;
	}

	if (rev == n)
		return (1);
	else
		return (0);
}
