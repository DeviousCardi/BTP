#include <stdio.h>
#include <stdlib.h>
int main() {
int ti, tax;
scanf("%d", &ti);
if(ti<200000){
    printf("0.00");}
    else if(200001<ti&& ti<500000){
        tax = (ti-200000)*0.1;
        printf("%.2f", tax);}
        else if(500001<ti && ti<1000000){
            tax = 30000+0.2*(ti-500000);
            printf("%.2f", tax);}
            else if(ti>1000000){
                tax = 130000+0.3*(ti-1000000);
            printf("%.2f", tax);}
	return 0; }