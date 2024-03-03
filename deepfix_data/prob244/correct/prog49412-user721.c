#include <stdio.h>
#include <stdlib.h>
int main() {
	        int ti ;
	        float tax;
	        scanf("%d",&ti);
	        if (ti==200000){printf("tax=0");}
	            else if (200001<ti<500000){
	            tax = ((ti - 200000)*10)/100.0;
	            printf("tax is %.2f",tax); }
	                else if (500001<ti<1000000){
	                    tax= 30000 + ((ti-500000)* 20)/100.0 ;
	                    printf("tax is %.2f",tax); }
	                        else if (1000000<ti){
	                            tax = (130000) + ((ti-1000000)*30)/100.0;
	                            printf("tax is %.2f",tax); }
	return 0; }