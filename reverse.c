//to reverse a given number
#include<stdio.h>

int main()
{
	int number,reverse=0;
	printf("Please enter a number to be reversed\n");
	scanf("%d",&number);
	while (number!=0)
	{
		reverse = reverse * 10;
		int lastnum = number % 10;
		reverse = reverse + lastnum;
		number=number/10;
	}
	printf("reversed number is %d\n",reverse);
	return 0;
}
