#include <stdio.h>
/**
* prime_factor - prints the prime factors of any number
* @num: The given number
*/
void prime_factor(int num)
{
	int div;

	for (div = 2; num > 1; div++)
	{
		while (num % div == 0)
		{
			printf("%d ", div);
			num = num / div;
		}
	}
	printf("\n");
}

/**
* main - checks the code
* Return: 0 once successful
*/
int main(void)
{
	int num;

	printf("Enter a number: \n");
	scanf("%d", &num);

	prime_factor(num);
	return (0);
}
