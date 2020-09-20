
/*This program determines the cost for renting a boarding
place for a set number of years.*/
//preprocessor section
#include<stdio.h>
int main ()
{
//constants declarations
const int RENT_RATE = 350;
int years = 3; //# of years over which rent is computed
int costOfRent;//cost for renting
//calculate the rent
costOfRent = years * RENT_RATE;
//output the results
printf("The cost per month for rent is: %d\n",RENT_RATE);
printf("The number of years is: %d\n",years);
printf("The total cost of rent is: %d\n", costOfRent);

return 0;
}
