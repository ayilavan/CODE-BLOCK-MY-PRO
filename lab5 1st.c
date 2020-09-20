#include<stdio.h>

int main()

{
    int number;
    printf("enter a number: ");
    scanf("%d",&number);


    if(number<10000)
    {


    if(number>=1000){
        printf("the number %d has 4 digits",number);
    }
    else if(number>=100)
    {
       printf("the number %d has 3 digits",number);
    }
    else if(number>=10)
    {
        printf("the number %d has 2 digits",number);
    }
    else if(0<=number)
    {
       printf("the number %d has 1 digit",number);
    }



    }

    else
        printf("the number %d has mor than 4 digits",number);


    return 0;
}

