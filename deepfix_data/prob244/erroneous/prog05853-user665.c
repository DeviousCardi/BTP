#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    float tax;
    scanf("%d",&a);
    if(a<=200,000){
        tax =0; }
    else if(a>=200001&&a<=500000) {
        tax=(a-200000*0.1); }
    else if(a>=500001&&a<=1000000) {
tax=(a-500000*0.2); }
else (a<=1000000) {
    tax=(130000+(a-1000000*.3))
    printf("%.2f",) }
	return 0; }