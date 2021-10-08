# SWAP
A c program to swap two numbers without using temporary variable
#include<stdio.h>
 int main()    
{    
int a=10, b=20;      
printf("Before swaping a=%d b=%d",a,b);      
a=a+b;   
b=a-b;    
a=a-b;    
printf("\nAfter swaping a=%d b=%d",a,b);    
return 0;  
}   
