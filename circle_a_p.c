#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14
int main()
{
	float radius,area,perimeter;
	printf("Please enter the radius of the circle\n");
	scanf("%f",&radius);
	perimeter = 2*pi*radius;
	area = pi*radius*radius;
	printf("The area of the circle%f:\n",area);
	printf("The perimeter of the circle%f:\n",perimeter);
	return 0;
	
}
