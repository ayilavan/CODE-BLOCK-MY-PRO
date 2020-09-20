#include<stdio.h>
int main()
{
    int i=0,number=0;
    printf("enter the number  :::");
    scanf("%d",&number);
    while(i<=20)//while(i++, i<=20) it is correct but 1st losding la 0 a count pannathu
        {
        printf("%d\n",number*i);
i++;
    }

    return 0;
}
