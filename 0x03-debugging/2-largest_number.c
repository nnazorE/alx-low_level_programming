<<<<<<< HEAD
#include "holberton.h"
=======
#include "main.h"
>>>>>>> 611bc6b5956b3c5992e9e33892d274a6c89f8160

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

<<<<<<< HEAD
	if (a >= b && a > c)
	{
		largest = a;
	}
	else if (b >= a && b > c)
=======
	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
>>>>>>> 611bc6b5956b3c5992e9e33892d274a6c89f8160
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
