#include<stdio.h>
int main()
{
    int i=0;
    while(i<=10){
        printf("%d\n",i);
       i++;
       //i=i++ is infinity while loop but only print 000000................................................0
    }

    return 0;
}
