#include <stdio.h>
/**
* main - checks the code
* @n: The number to be checked
* Return: 0 once successful
*/

int prime_check(int n);

int main(void)
{
	printf("Enter a number: \n");
	int n;

	scanf("%d", &n);
	prime_check(n);
	return (0);
}

/**
* prime_check - function that checks if a number is prime
* @n: The number to be checked
* Return: n
*/
int prime_check(int n)
{
	int a, b;
	
	b = 0;
	for (a = 1; a <= n; a++)
	{
		if (n % a == 0)
		{
			b++;
		}
	}
	if (b == 2)
	{
		printf("%d is a prime number.\n", n);
	}
	else
	{
		printf("%d is a not prime number.\n", n);
	}
	return (n);
}
