#include <stdio.h>
#include <math.h>
/**
* main - prints square root of a given number
* Return: 0 once successful
*/
int main(void)
{
	int num;
	double sq;


	printf("Enter an integer: \n");
	scanf("%d", &num);

	sq = sqrt(num);
	printf("The square root of %d is %.2f\n", num, sq);
	return (0);
}
