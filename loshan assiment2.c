#include<stdio.h>

int main()

{
    float regular_pay_rate=250;
    float overtime_pay_rate=300;

    float regular_pay=regular_pay_rate*40;
    float overtime_pay=overtime_pay_rate*15;

    printf("weekly pay : %.2f",regular_pay+overtime_pay);


    return 0;
}

