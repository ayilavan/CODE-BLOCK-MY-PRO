#include<stdio.h>
int main()
{
    int x=(20||40)&& (60);//60 change any number result is "1" but change to 0, answer=0
    printf("x is %d",x);
    return 0;
}
