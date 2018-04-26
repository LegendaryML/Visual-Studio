#include <stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);
int main(void)
{
	int choice;
	char ch1;
	void count(void);
	printf("This program will demo a menu program.\n");
	while (1)
	{
		while ((choice = get_choice()) != 'E')
		{
			switch (choice)
			{
			case 'A': printf("Buy low,sell high.\n");
				break;
			case 'B': putchar('\a');
				break;
			case 'C': count();
			default: printf("Choice error!\n");
			}
		}
		printf("Enter \"Y\" to continue or \"N\" to exit.\n"); 
		getchar();
		scanf_s("%c", &ch1, 1);
		if (ch1 == 'N' || ch1 == 'n')
			break;
	}
	printf("Thank you for your use!\nBye-bye!\n");
	system("pause");

	return 0;
}
void count(void)
{
	int n, i;
	printf("Count how far? Enter an integer: \n");
	n = get_int();
	for (i = 1; i <= n; i++)
		printf("%d\t", i);
	while (getchar() != 'n')
		continue;
}
char get_choice(void)
{
	int ch;
	printf("Enter the letter of your choice: \n");
	printf("A: advice				B: bell\n");
	printf("C: count				E:exit\n");
	ch = get_first();
	while ((ch<'A' || ch>'C') && ch != 'E')
	{
		printf("Please respond with A,B,C or E.\n");
		ch = get_first();
	}

	return ch;
}
char get_first(void)
{
	int ch;
	ch = getchar();
	while (getchar() != '\n')
		continue;

	return ch;
}
int get_int(void)
{
	int input;
	char ch;
	while (scanf_s("%d", &input) != 1)
	{
		while (ch = getchar() != 'n')
			putchar(ch);   //处理对C选项的错误输入
		printf(" is not an integer.\nPlease enter an integer value.\n");
	}

	return input;
}