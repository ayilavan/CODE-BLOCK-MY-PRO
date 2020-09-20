#include<stdio.h>
typedef enum{false,true} b;

int main()
{
    b x=true;
    if (x==true)
    {
        printf("the x value is true");
    }
else
{
    printf("x value is false");
}
    return 0;
}

