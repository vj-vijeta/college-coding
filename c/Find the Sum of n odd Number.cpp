//C Program to Find the Sum of n odd Numbers in a Given Range (Using For Loop)

#include<stdio.h>
void main()
{
 //Declaring Variable
  int num1, num2, i, sum = 0 ;

//Input Number
 printf("Enter Starting Number\n");
 scanf("%d",&num1);

 printf("Enter Ending Number\n");
  scanf("%d",&num2);

 for(i=num1;i<=num2;i++)
  {   if(i%2==0)
      {
        continue ;
      }
      else
      {
        sum = sum + i;
      }
  }
  printf("\nSum of odd Numbers in Given Range : %d", sum);

}
