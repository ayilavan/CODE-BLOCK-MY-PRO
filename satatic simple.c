#include<stdio.h>

int main()
{
    printf("%d\n",func());
    printf("%d\n",func());

    return 0;
}

int func()
{
    static count=0;
    count++;

    return count;
}
