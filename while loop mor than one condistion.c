#include<stdio.h>
int main()
{
    int i=1;
    while(i+=3 ,i<=20){
        printf("%d\n",i);
        i++;
    }

    return 0;
}
