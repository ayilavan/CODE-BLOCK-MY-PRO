#include<stdio.h>
int main()
{
    int a,b,c;
    a=5;
    b=4;

    c=a&b;
    printf("%d\n",c);
    c=a|b;
    printf("%d\n",c);
    c=~a;
    printf("%d\n",c);
    c=a^b;
    printf("%d\n",c);



    return 0;
}
