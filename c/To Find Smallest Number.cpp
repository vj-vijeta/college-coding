//C program to find Smallest among two numbers 
//using Conditional operator or ternary operator

#include<stdio.h>

void main()
{
  // Variable declaration
   int a,b,small;

   printf("Enter two number\n");
   scanf("%d %d",&a,&b);

  // Smallest among a and b
   small = a<b?a:b;

  //Display smallest number
   printf("Smallest among 2 Number is : %d",small);

}
