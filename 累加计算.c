#include <stdio.h>
int main(void)
{
	int num_1, num_2, sum = 0, A;
	printf("We will accumulate the consecutive integers,and the we will back the cum to you.\n");
	printf("Please enter a number to begin:");
	scanf_s("%d", &num_1);
	printf("Then enter another number to stop:");
	scanf_s("%d", &num_2);
	for (A = num_1; A <= num_2; A++)
		sum = sum + A;
	printf("Form %d accumulation to %d is %d.", num_1, num_2, sum);
	getchar();
	getchar(); 

	return 0;
}
