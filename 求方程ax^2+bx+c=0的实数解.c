#include <stdio.h>
#include <math.h>
int main(void)
{
	double a, b=1.0, c=1.0, d, derta, x1, x2;
	char ch;
	while (1)
	{
		printf("Inpit a,b,c\n");
		printf("We will calculate the solution for equation ax^2+bx+c=0 for you.\n");
		scanf_s("%lf%lf%lf", &a, &b, &c);
		derta = b * b - 4 * a*c;
		if (derta >= 0)
		{
			d = sqrt(derta);
			x1 = (-b + d) / (2 * a);
			x2 = (-b - d) / (2 * a);
			printf("The solution to this equation is:x1=%f,x2=%f.\n", x1, x2);
		}
		else
			printf("Please enter other values.\n");
		printf("Enter \"Y\" to continue or \"N\" to exit.\n");
		getchar(); 
		scanf_s("%c", &ch);
		if (ch == 'N')
			break;
	}
	printf("Thank you for your use!\n");
	getchar();
	getchar();

	return 0;
}