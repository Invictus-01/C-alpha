#include <stdio.h>
/**
* main - entry point
* Return: 0 once successful
*/
int main(void)
{
	int num;

	printf("Enter a number: \n");
	scanf("%d", &num);
	int count = 12;

	while (count >= 1)
	{
		int product = num * count;

		printf("%d * %d = %d\n", num, count, product);
		count--;
	}
	printf("\n");
	return (0);
}
