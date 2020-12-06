#include <stdio.h>
#include <stdlib.h>

int km_car = 20; //default km that the car does for 1 liter
int km_todo; //km that will do a person divided by the km of the cars to find the liters
int liter_needed; //found by the km inserted divided by the km of the car


float liter_cost = 1.40; //single liter cost
float tot_liter__cost; //total cost for each liter that will be used.



int main() {

             printf("Insert your km to do \n");
             scanf("%d", &km_todo);


             liter_needed = km_todo / km_car;
             printf("These are your needed liters for your km's \n %d ", liter_needed);

             tot_liter__cost = liter_cost * liter_needed;

             printf("\n This is the cost for your liters \n %.2f \n ", tot_liter__cost);

             system("pause");
             return 0;


}
