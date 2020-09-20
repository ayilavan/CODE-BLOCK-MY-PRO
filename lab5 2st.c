#include<stdio.h>

int main()
{
    int hh,mm;

    printf("enter time for 24 hours format:\n");
    scanf("%d:%d",&hh,&mm);
if(hh<24 && mm<60)
    {
     if(13<=hh && 24>hh){
        hh=hh-12;
        printf("time is %d:%d pm",hh,mm);
     }
     else if(hh==12)
     {
         printf("time is 12:%d pm",mm);
     }
     else if(13>hh && 0<hh){
       printf("time is %d:%d am",hh,mm);
     }
     else if(hh==00)
     {

         printf("time is 12:%d am",hh,mm);
     }


}
else
    printf("wrong format");


    return 0;
}
