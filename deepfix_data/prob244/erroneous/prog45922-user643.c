#include <stdio.h>
#include <stdlib.h>
int main() {
    int I;
    float ti;
    scanf("%d%f",&I,&ti);
    if (I<=200,000) {
       printf("ti=0"); }
else if (200,001<=I<=500,000) {
    printf("tax=10%ofti-200000"); }
else if (500,001<=I<=1,000,000) {
    printf("tax=30000+20%of(ti-500000"); }
else if (I>1,000,000) {
    printf("tax=130000+30%of(ti-1000000") } }
	return 0; }