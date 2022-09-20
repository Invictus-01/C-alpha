#include <stdio.h>
/**
* main - displays a menu
* Responds based on users selection
* Return: 0 once successful
*/
int main(void)
{
	printf("Choose a number (1 - 5) based on your preference: \n");
	printf("1. Sign up to meet the Doctor\n");
	printf("2. View the Doctor's schedule for patients today\n");
	printf("3. Book an appointment for another day\n");
	printf("4. Complaints\n");
	printf("5. Exit\n");
	int menuNum;

	scanf("%d", &menuNum);
	switch (menuNum)
	{
		case 1:
			printf("Signing up...\n");
			printf("Enter first your name: \n");
			char name[35];

			scanf("%s", name);
			printf("%s, you have been registered to meet the Doctor.\n", name);
		break;
		case 2:
			printf("Checking Doctor's schedule...\n");
			printf("The doctor will be free in an hour\n");
		break;
		case 3:
			printf("Please wait! Your appointment is being booked...\n");
			printf("Please enter your prefered day: \n");
			char day[10];

			scanf("%s", day);
			printf("%s has been booked for you, see you then.\n", day);
		break;
		case 4:
			printf("Opening complaints log...\n");
			printf("You have been redirected to our customer care unit. Please call these numbers: +234-806-000-0000.\n");
		break;
		case 5:
			printf("Exiting...\n");
			printf("Thank you for trusting us with your health.\n");
		break;
		default:
			printf("Wrong input!\n");
		break;
	}
	return (0);
}
