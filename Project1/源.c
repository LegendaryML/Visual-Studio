#include <stdio.h>
double power(double a, int x);
int main(void)
{
	double base,result;
	int index;
	char ch1,ch2;
	printf("This program will calculate an integer power of a number.\n");
	printf("Please enter the base and index:  ");
	while (1)
	{
		if (scanf_s("%lf%d", &base, &index) == 2)
		{
			result = power(base, index);
			printf("%f to the %d power is %lf.\n", base, index, result);
			while (1)
			{
				printf("Enter \"Y\" to continue or \"N\" to exit.\n");
				getchar();
				scanf_s("%c", &ch1);
				if (ch1 == 'N' || ch1 == 'n')
				{
					break;
				}
				else
				{
					printf("Please enter the base and index:  ");
					scanf_s("%lf%d", &base, &index);
					result = power(base, index);
					printf("%f to the %d power is %lf.\n", base, index, result);
				}
			}
		}
		else
		{
			printf("Enter error!\n");
			printf("Enter \"A\" to try again or \"E\" to exit!");
			getchar();
			getchar();
			scanf_s("%c", &ch2);
			if (ch2 == 'E' || ch2 == 'e')
			{
				printf("Thank you for your use!\n");
				getchar();
				getchar();
				exit(0);
			}
		}	
		printf("Thank for your use!");
		getchar();
			exit(0);
	}
	system("pause");


	return 0;
}
double power(double a, int x)
{
	double exp=1;
	int i;
	for (i = 1; i <= x; i++)
		exp *= a;


	return exp;
}