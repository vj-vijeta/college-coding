//Write a C Program To Read Month Number And Display Month Name Using Switch Case

#include<stdio.h>

void main()
{
    int choise;
    printf("\n enter the month number : ");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1: printf("Month is :  January");
                break;
        case 2: printf("Month is :  February");
                break;
        case 3: printf("Month is :  March");
                break;
        case 4: printf("Month is :  April");
                break;
        case 5: printf("Month is :  May");
                break;
        case 6: printf("Month is :  June");
                break;
        case 7: printf("Month is :  July");
                break;
        case 8: printf("Month is :  August");
                break;
        case 9: printf("Month is :  September");
                break;
        case 10: printf("Month is :  October");
                break;
        case 11: printf("Month is :  November");
                break;
        case 12: printf("Month is :  December");
                break;
        default : printf("invalid number");
    }


}
