#include <stdio.h>
/**
* main - checks the number of loaves of bread eaten and give compliment
* Return: 0 once successful
*/
int main(void)
{
	int loaves;

	printf("How many loaves of bread did you eat today?(Enter the number and be honest)\n");
	scanf("%d", &loaves);

	switch (loaves)
	{
		case 1:
			printf("You did a good job by eating %d loaf.\n", loaves);
		break;
		case 2:
			printf("You did a OK job by eating %d loaves.\n", loaves);
		break;
		case 3:
			printf("%d loaves is not a good idea. Please reduce it next time.\n", loaves);
		break;
		case 4:
			printf("No way! %d loaves is too much. Cut your carbs intake.\n", loaves);
		break;
		default:
			printf("I know you love your body fat. Enjoy it!\n");
		break;
	}
	int calories = 398;
		printf("That is about %d calories.\n", calories * loaves);
	return (0);
}
