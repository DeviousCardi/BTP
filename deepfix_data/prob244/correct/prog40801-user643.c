#include <stdio.h>
#include <stdlib.h>
int main() {
    int ti;
    float tax;
    scanf("%d",&ti);
    if (ti<=200000) {
       tax=0;
       printf("%lf",tax); }
else if ((200001<=ti)&&(ti<=500000)) {
    tax=(10*(ti-200000))/100;
    printf("%lf",tax); }
else if ((500001<=ti)&&(ti<=1000000)) {
    tax=30000+(20*(ti-500000))/100;
    printf("%lf",tax); }
else if (ti>1000000) {
    tax=130000+(30*(ti-1000000))/100;
    printf("%lf",tax); }
	return 0; }