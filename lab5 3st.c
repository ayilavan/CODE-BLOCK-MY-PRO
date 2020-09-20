#include<stdio.h>

int main()
{
    int speed;
    printf("enter speed :");
    scanf("%d",&speed);

    if(speed<=63)
    {
        if(speed>47){
            printf(" Discription is storm ");
            }
        if (47>=speed>27){
            printf(" Discription is gale ");
        }
        if (27>=speed>3)
        {
            printf(" Discription is breeze ");
        }
        if (3>=speed>1)
        {
            printf(" Discription is air ");
        }
        if (speed<1){
            printf(" Discription is calm ");
        }
    }
        else
            printf(" Discription is hurricane ");


    return 0;
}
