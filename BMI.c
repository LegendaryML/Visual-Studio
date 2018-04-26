#include <stdio.h>
int main(void)
{
	float w=0,h=0,bmi=0;
	char  ch;
	while(1)
	{
		printf("\nHello do you want to know your BMI?\n");
		printf("I can calculate it for you.\n");
		printf("Your weight is ");
		scanf_s("%f", &w);
		printf("Your height is ");
		scanf_s("%f", &h);
		bmi = w / (h*h);
		printf("Your BMI is %f\n", bmi);
		if (bmi < 20)
			printf("You are too thin!Please eat more.\n\n");
		else if (bmi >= 20 && bmi <= 25)
			printf("Your body is very good!\n\n");
		else if (bmi >= 25 && bmi <= 30)
			printf("You are a little fat.\nPlease eat less.\n\n");
		else if (bmi >= 30)
			printf("You are too fat!\nPlease have a diet and do more exercise!\n\n");
		printf("Press \"Y\" to continue or press \"N\" to stop\n");
		getchar();
		scanf_s("%c", &ch);
		if (ch == 'N')
			exit(0);
	}
	getchar();
	getchar();

	return 0;
}
