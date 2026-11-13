#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	double x, y, ans;
	char z;  

	//Really just an unnecessary introduction.
	printf("Hello! This is E3san's SuperNoobCalculator!\n");
	printf("This program perform simple arithmetic operations.\n");
	printf("First I need two number input frm you (x, y)\n");

	//Yay, finaly some input!
	scanf("%lf", &x);
	scanf("%lf", &y);

	//ask which operations user want.
	printf("plese type which operation you wamt to perform?\n");
	printf("a = Addition | d = Division | m = Multiplication | s = Subtraction \n");
	if (scanf(" %c", &z) != 1)
	{
		printf("Could not read the operation.\n");
		return 1;
	}
	z = (char)tolower((unsigned char)z);

	// Select and calculate the requested operation.
	switch (z)
	{
		case 'a':
			ans = x + y;
			break;
		case 's':
			ans = x - y;
			break;
		case 'm':
			ans = x * y;
			break;
		case 'd':
			if (y == 0.0)
			{
				printf("Cannot divide by zero you dumb ass.\n");
				return 1;
			}
			ans = x / y;
			break;
		default:
			printf("Unknown operation.\n");
			return 1;
	}

	printf("The result is: %.2f\n", ans);
	
	return 0;
}