#include <stdio.h>
#include <stdlib.h>
int main() {
    int ti;
    float o;
    scanf("%d",&ti);
    if(ti>0) {
    if(ti<=200000) {
        o=0;
        printf("%.2f",o); }
    else if(ti<=500000) {
        o=.1*(ti-200000);
        printf("%.2f",o); }
    else if(ti<=1000000) {
        o=30000+(.2*(ti-500000));
        printf("%.2f",o); }
    else {
        o=130000+(.3*(ti-1000000));
        printf("%.2f",o); } }
	return 0; }