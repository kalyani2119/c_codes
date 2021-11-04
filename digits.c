/*counting the number of digits of a given number*/
#include<stdio.h>
int main()
{
  int num;
  printf("Please enter the number:\n");
  scanf("%d",&num);
  if(num==0)
  {
    printf("The number entered is zero\n");
  }
  else
  {
    int count=0;
    while(num>0)
    {
      num=num/10;
      count++;
    }
    printf("The number of digits are/is\n%d",count);
  }
    system("pause>0");
}


