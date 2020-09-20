#include<stdio.h>
int main()

{
    int x=10,y=2;
    switch(x>y && x%y==6)
    {
    case 1:
        printf("hi lavan");
        break;
    case 0:
        printf("eruma KAYANTHAN");
        break;

        default:
        printf("bye chellam");
    }

    return 0;
}
