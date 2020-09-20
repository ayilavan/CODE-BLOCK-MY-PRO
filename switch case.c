#include<stdio.h>
int main()
{
    int number;

    printf("enter a number  : ");
    scanf("%d",&number);
    switch(number)
    {
        case 10:
        printf("number is 10");
        break;
        case 20:
        printf("number is 20");
        break;
        case 30:
            printf("number is 30");
            break;
        default:
            printf("enter your number is not equal 10 or 20 or 30");

    }
    return 0;
}
