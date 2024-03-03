#include <stdio.h>
#include <stdlib.h>
int main() {
    int ti;
    if (ti<=200000) {
        printf("tax=0"); }
    else {
        if (ti>=200001&&ti<=500000) {
            float a;
        a=(((10.0)/100)*(ti-200000));
        printf("tax=%.2f",a); }
    else if (ti>=500001&&ti<=1000000) {
          float b;
        b=(((20.0)/100)*(ti-500000));
        printf("tax=%.2f",b); }
    else if (ti>=1000000) {
        float c;
        c=(((30.0)/100)*(ti-1000000));
        printf("tax=%.2f",130000+c); } }
	return 0; }