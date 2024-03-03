#include <stdio.h>
int main() {
    float TI;
    float tax;
    scanf("%lb",&TI);
    if(TI<=200000) {
        printf("0.00"); }
    else {
        if(TI<=500000) {
            tax=(TI*0.1);
            printf("%.2f",tax); }
        else {
            if(TI<=1000000) {
               printf("%.2f",(30000+TI*.2)); }
            else
            printf("%.2f",(130000+TI*.3)); } }
	return 0; }