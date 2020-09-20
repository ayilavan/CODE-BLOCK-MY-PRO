#include<stdio.h>

int main()
{
    int age,year;
    printf("enter the people year\n");
    scanf("%d",&year);
    age=2020-year;
    printf("your age is:%d\n",age);

    if(18<=age)
    {
        printf("you are eligible for voting");
    }
    if(18>age)
    {
        printf("you are not eligible");
    }

    return 0;
}
