//C  Program to check prime number Using Function

#include <stdio.h>
void checkPrime(int n)
{
    int i, count = 0;
    for(i=2; i<n; ++i)
    {
        // check for non prime number
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    if (count==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
}
int main()
{
   int n;

    printf("Enter a number to check prime number or not : ");
    scanf("%d",&n);

    checkPrime
