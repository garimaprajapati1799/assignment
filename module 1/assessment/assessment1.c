#include <stdio.h>
void add(int n1, int n2) // declaration of function
{
	printf("\nEnter first number =");
	scanf("%d", &n1);
	printf("\nEnter second number=");
	scanf("%d", &n2);
	printf("\nthe addition of %d and %d is %d", n1, n2, n1 + n2);
}
void sub(int n1, int n2)
{
	printf("\nEnter first number =");
	scanf("%d", &n1);
	printf("\nEnter second number=");
	scanf("%d", &n2);
	printf("\nThe subtraction of %d and %d is %d", n1, n2, n1 - n2);
}

void multiply(int n1, int n2)
{
	printf("\nEnter first number =");
	scanf("%d", &n1);
	printf("\nEnter second number=");
	scanf("%d", &n2);
	printf("\nThe multiplication of %d and %d is %d", n1, n2, n1 * n2);
}
void division(int n1, int n2)
{
	printf("\nEnter first number =");
	scanf("%d", &n1);
	printf("\nEnter second number=");
	scanf("%d", &n2);
	printf("\nThe division of %d and %d is %f", n1, n2, (float)n1 / (float)n2);
}
int main()
{
	int choice, n1, n2;
up:
	printf("\n1 addition");
	printf("\n2 subtraction");
	printf("\n3 multiplication");
	printf("\n4 division");
	printf("\nEnter your choice=");
	scanf("%d", &choice);

	switch (choice)
	{
	case 1:

		add(n1, n2);

		break;

	case 2:

		sub(n1, n2);

		break;

	case 3:

		multiply(n1, n2);

		break;

	case 4:

		division(n1, n2);

		break;

	default:
		printf("\nInvalid choice");
	}

	printf("\nPress 'Y' to continue and press 'N' to exit");
	scanf("\n%c", &choice);
	if (choice == 'y' || choice == 'Y')
	{
		goto up;
	}

	return 0;
}
