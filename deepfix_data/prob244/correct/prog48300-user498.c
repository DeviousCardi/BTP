#include <stdio.h>
#include <stdlib.h>
int main() {int income ;
            scanf("%d" , &income );
            float tax ;
            scanf("%0.2f",&tax) ;
            if(income<=200000)
               tax=0.00;
             else if ( income>200000 && income<=500000)
              tax=0.1*(income-200000);
              else if (income>500000 && income<=1000000)
              tax=30000 + 0.2* (income-500000);
              else if (income>1000000)
              tax=130000+0.3*(income-1000000);
	          printf("%0.2f",tax) ;
	return 0; }