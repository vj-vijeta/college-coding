//Program to Calculate Sum of n Numbers In C Using Loop

#include<stdio.h>
int main()
{
  int i,n,sum=0,num;
  float avg;

  printf("\nEnter How many Number you want?\n");
  scanf("%d",&n);

  printf("\nEnter elements one by one\n");
  for(i=0;i<n;++i)
   {
     scanf("%d",&num);
     sum = sum +num;
   }

  printf("\nSum of given Numbers = %d",sum);

  return 0;
}
