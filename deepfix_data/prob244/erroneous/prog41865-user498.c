#include <stdio.h>
#include <stdlib.h>
int main() {int income ;
            scanf("%d" , &income ;)
            float tax ;
            scanf("%f",&tax;)
            if(income<=2,00,000)
               tax=0.00;
             else if ( income>2,00,00 && income<=5,00,00)
              tax=0.1*(income-2,00,000);
              else if (income>5,00,000 && income<=1,000,000)
              tax=30,000 + 0.2* (income-5,00,000);
              else if (income>1,000,000)
              tax=1,30,000+0.3*(income-1,000,000);
	          printf("%0.2f",tax) ;
	return 0; }