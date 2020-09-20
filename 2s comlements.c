#include<stdio.h>

int main()
{
    int n;
    printf("enter bit number do you want:");
    scanf("%d",&n);
    char binary[n+1];  // binary array declaration
    char ones_complements[n+1]; //ones complements array declaration
    char twos_complements[n+1]; //twos_complements array declaration
    int carry=1;
    printf("enter a binary number:");
    scanf("%s",binary);
    printf("%s",binary);
    printf("\n the ones complements of the binary number is:");

    //finding the ones complements
    for(int i=0;i<n;i++)
    {
       if(binary[i]=='0')
       ones_complements[i]='1';
       else if(binary[i]=='1')
       ones_complements[i]='0';
   }
     ones_complements[n]='\0';
   printf("%s", ones_complements);


printf("\nThe twos complement of a binary number is : ");

// Finding twoscomplement in C
for(int i=n-1; i>=0; i--)
    {
        if( ones_complements[i] == '1' && carry == 1)
        {
            twos_complements[i] = '0';
        }
        else if( ones_complements[i] == '0' && carry == 1)
        {
            twos_complements[i] = '1';
            carry = 0;
        }
        else
        {
            twos_complements[i] =  ones_complements[i];
        }
    }
twos_complements[n]='\0';
printf("%s",twos_complements);

    return 0;
}
