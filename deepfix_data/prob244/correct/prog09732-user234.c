#include <stdio.h>
#include <stdlib.h>
int main() {
    int ti;
    float tax;
    scanf("%d",&ti);
    scanf("%f",&tax);
    if (ti<=200000)
    printf("0.00");
    else if (ti>=200001 && ti<=500000) {
        tax=0.1*(ti-200000);
        printf("%.2f",tax); }
    else if (ti>500001 && ti< 1000000) {
        tax=(0.2*(ti-500000))+30000;
        printf("%.2f",tax); }
    else if (ti>1000000) {
        tax=(0.3*(ti-1000000))+130000;
        printf("%.2f",tax); }
	return 0; }