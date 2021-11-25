#include<stdio.h>
int main()
{
	int number1,number2,hcf,count=1;
	
	printf("Please enter the any two numbers:\t");
	scanf("%d%d",&number1,&number2);
	
	while(count<=number1 && count<=number2)
	{
		if(number1%count==0 && number2%count==0)
		{
			hcf=count;
		}
		count++;
	}
	printf("The HCF of %d and %d is %d\t",number1,number2,hcf);
	return 0;
}
