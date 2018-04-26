#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(void)
{
	int dtime;
	char ch;
	printf("This is a delay printing program.\n");
	printf("Please input delay time:\n");
	scanf_s("%d", &dtime);
	getchar();
	printf("Please input a character:\n");
	scanf_s("%c", &ch);
	Sleep(dtime);
	printf("%c\n", ch);
	system("pause");

	return 0;
} 