//Factorial of a Number In C Using Recursion

#include<stdio.h>
int fact(int );
void main()
{ //variable declaration
  int x,z;
  
  //input number
  printf("Enter a number : ");
  scanf("%d",&x);
  
  z=fact(x); //calling recursive function to find factorial
  printf("factorial is %d",z);
}
int fact(int n)
{   int ft=1;
    if(n==1)
    return(n);
    ft=n*fact(n-1);
    return(ft);
}
