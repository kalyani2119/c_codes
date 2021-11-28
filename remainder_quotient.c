#include<stdio.h>
#include<conio.h>
void main()
{
	int dividend,divisor,remainder=0.0,quotient=0.0;
	printf("To print quotient and remainder of two given numbers!\n");
	printf("=====================================================\n");
	printf("Please enter dividend\t");
	scanf("%d",&dividend);
	printf("Please enter divisor\t");
	scanf("%d",&divisor);
	remainder = dividend % divisor;
	quotient = dividend / divisor;
	printf("The quotient is %d\t",quotient);
	printf("\nThe remainder is %d\t",remainder);
	getch();
	
}
