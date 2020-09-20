#include<stdio.h>


int main()
{

    int sum=0; //variable initialiozation

    char name[15]; // variable

int i=0;
printf("enter a name");
//scanf("%[^\n]",name);
gets(name);
while(name[i]!='\0')
{
    printf("%c-%d",name[i],name[i]);
    printf("\n");
    i++;
    sum=sum+name[i];

}
   printf("sum is %d",sum);
    return 0;
}

