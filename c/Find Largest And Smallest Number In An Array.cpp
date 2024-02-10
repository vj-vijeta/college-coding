//C Program To Find Largest and Smallest Number In An Array Using Pointer

#include<stdio.h>
void  main()
{
    int i,*ptr, n,a[100],larg,small;

    printf("Enter How many number you want?:\n") ;
    scanf("%d",&n) ;

    printf("Enter %d numbers\n",n) ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    ptr = &a[0];
    larg= *ptr;
    for(i=0;i<n;i++,*ptr++)
    {
        if(*ptr>larg)
        {
            larg=*ptr;
        }
    }
    ptr = &a[0];
    small= *ptr;
    for(i=0;i<n;i++,*ptr++)
    {
        if(*ptr<small)
        {
            small=*ptr;
        }
    }
    printf("%d is Largest Number\n",larg);
    printf("%d is Smallest Number",small);
}
