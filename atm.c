#include<stdio.h>
int main()
{
    int amount,counts;
    printf("enter amount : ");
    scanf("%d",&amount);

    if(amount>5000){
            counts=amount/5000;
        printf("5000 ruppes count number is %d\n",counts);}

        amount=amount-5000*counts;

    if (amount>1000){
        counts=amount/1000;
         printf("1000 ruppes count number is %d\n",counts);}

         amount=amount-1000*counts;

    if(amount>500);{
        counts=amount/500;
         printf("500 ruppes count number is %d\n",counts);
    }
    amount=amount-500*counts;

    if(amount>100)
        counts=amount/100;

          printf("100 ruppes count number is %d\n",counts);





  return 0;

}
