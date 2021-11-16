//To find the sumation of the numbers within the given range
#include<stdio.h>
#include<conio.h>
void main()
{
  int num1,num2,sum=0;
  printf("Please enter the range\n");
  scanf("%d%d",num1,num2);
  while(num1<=num2)
  {
    sum=sum+num1;
    num1=num1+1;
  }
  printf("sumation=%d",sum);
  getch();
}
  
