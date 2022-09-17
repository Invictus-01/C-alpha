#include<stdio.h>
/**
* main - entry point
* Return: 0 once successful
*/
int main(void)
{
	int num;

	printf("Enter a number: \n");
	scanf("%d", &num);
	int count = 1;

	while (count <= 12)
	{
		int result = num * count;

		printf("%d * %d = %d\n", num, count, result);
		count++;
	}
	printf("\n");
	return (0);
}
