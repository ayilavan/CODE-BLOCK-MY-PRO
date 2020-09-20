#include<stdio.h>
int main()

{
    int marks;
    printf( "enter your marks  : ");
    scanf("%d",&marks);
    if(100>=marks && 0<=marks){

    if(100>=marks&& marks>85)
    {
     printf( "wow! your scored grade is A");
    }
    else if(85>=marks&& marks>65)
    {
     printf( "good! your scored grade is B");
    }
    else if(65>=marks && marks>40)
    {
     printf( "not bad! your scored grade is C");
    }

    else
        printf( "sorry! your scorde grade is fail");
    }

    else
        printf( "invalide marks");
    return 0;
}
