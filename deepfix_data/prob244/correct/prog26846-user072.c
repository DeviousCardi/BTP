#include <stdio.h>
#include <stdlib.h>
int main() {
int ti, tax;
scanf("%d", &ti);
if(ti<200000){
    printf("0");}
    else if(200001<ti<500000){
        tax = 0.1*(ti-200000);
        printf("%.2f", tax);}
        else if(500001<ti<1000000){
            tax = 30000+0.2*(ti-500000);
            printf("%.2f", tax);}
            else if(ti>1000000){
                tax = 130000+0.3*(ti-1000000);
            printf("%.2f", tax);}
	return 0; }