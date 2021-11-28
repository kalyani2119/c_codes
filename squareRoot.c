#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float number,squareRoot;
	printf("Please enter the number to find the square root!\t");
	scanf("%f",&number);
	squareRoot=sqrt(number);
	printf("The square root of %f is %f\t",number,squareRoot);
	getch();
	
}
