#include<stdio.h>
int main()
{
    int i,number;
    printf("enter the number ::: ");
    scanf("%d",&number);

    for(i=20;i>=number;i--) //decriment 20 19 18 ..... number varaikum
        // for(i=20;i<=number;i++)  is incremnt 20 to up 21 22 ..... number varaikkkum
    {
        printf("%d\n",i);
    }
    return 0;
}
