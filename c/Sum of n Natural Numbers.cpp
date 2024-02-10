//C Program to Find the Sum of n Natural Numbers Using For loop

#include<stdio.h>
int main()
{
 //Declaring Variable
  int n, i, sum = 0 ;
 
//Input Number
 printf("Enter a Number\n");
  scanf("%d",&n);
 
 for(i=1;i<=n;i++)
  {
      sum = sum + i;
  }
  printf("\nSum of %d Natural Numbers = %d",n, sum);
  return 0;
}
