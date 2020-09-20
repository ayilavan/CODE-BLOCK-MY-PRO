#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers a b c :\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is largest number");
    }
    if(b>a && b>c)
    {
        printf("b is largest number");
    }
    if (c>a && c>b)
    {
        printf("c is largest");
    }

    return 0;
}
