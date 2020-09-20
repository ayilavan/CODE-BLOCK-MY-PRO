#include<stdio.h>
void main ()
{
    int i=2,j=89;
    for(i=0;i<5;i++,j=j+2)
    {
        printf("%d %d\n",i,j);
    }
}
