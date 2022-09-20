#include <stdio.h>
/**
* main - checks the given code
*
* @i: the given integer
* Return: 0 once successful
*/

int sum_natural(int i);

int main(void)
{
	int a, b;
	
	printf("Enter an integer: \n");
	scanf("%d", &b);

	a = sum_natural(b);
	printf("The sum of natural number in %d is %d\n", b, a);

	return (0);
}

/**
* sum_natural - calculates the sum of natural numbers is given integer
* @i: the given integer
* Return: n - variable that takes the sum of natural numbers in i
*/
int sum_natural(int i)
{
	int c;

	if (i == 1)
	{
		return (i);
	}
	else
	{
		c = i + sum_natural(i - 1);
	}
	return (c);
}
