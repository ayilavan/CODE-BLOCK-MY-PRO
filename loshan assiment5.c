#include<stdio.h>

int main()
{
    const float PI=3.14519;
    int radius=12;

    float area=PI*radius*radius;
    float circumference=2*PI*radius;

    printf("area of a circle : %f\n",area);
    printf("circumference of a circle : %f\n",circumference);

    return 0;
}
