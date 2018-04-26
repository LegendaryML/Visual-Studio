#include <stdio.h>
#include <stdlib.h>
double power(double,int);
int main(void)
{
	char ch;
	int index;
	double base, result;
	while (1)
	{
		printf("Please input a number and it`s index: \n");
		scanf_s("%lf%d", &base, &index);
		result = power(base, index);
		printf("The result is %.3lf.\n", result);
		printf("Enter \"Y\" to continue or \"N\" to exit.\n");
		getchar();
		scanf_s("%c", &ch);
		if (ch == 'N' || ch == 'n')
			break;
	}
	printf("Thank you for your use!\n");
	system("pause");

	return 0;
}
double power(double b, int i)
{
	int a;
	double exp=1;
	if (i == 0)
		return 1;
	if (b == 0)
		return 0;
	else if (i > 0)
	{
		for (a = 1; a <= i; a++)
			exp *= b;
		return exp;
	}
	else
	{
		i = -i;
		for (a = 1; a <= i; a++)
			exp *= b;
		return (1 / exp);
	}
}