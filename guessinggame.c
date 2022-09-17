#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - generates a fake random number from the time of the pc
* The number is divided by a specified maxnumber to give a remainder
* The user will guess the remainder
* Use if statements to tell if it is true or not
* Return: 0 once successful
*/
int main(void)
{
	int maxNum = 60;
	int randomNum;

	srand(time(NULL));
	randomNum = rand() % maxNum;

	/*printf("%d\n", randomNum);*/
	printf("Guess a number from 0 - %d\n", maxNum);
	int num;

	scanf("%d", &num);
	printf("OK! You guessed: %d\n", num);
	printf("The correct answer is %d\n", randomNum);
	if (num == randomNum)
	{
		printf("Yikes!! You won!\n");
	}
	else
	{
		printf("Ooops! You lost, Try again.\n");
	}
	printf("Thank you for playing\n");
	return (0);
}
