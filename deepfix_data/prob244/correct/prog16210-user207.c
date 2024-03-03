#include <stdio.h>
#include <stdlib.h>
int main() {
    float a,b,c,d;
    scanf("%f",&a);
    if (a<200000){
        a=0;
    printf("%.2f",a); }
    else {
    if (a>=200001&&a<500000){
        a=a-200000;
    a=(10/100)*a;
    printf("%.2f",a); }
    else {
    if (a>=500001&&a<1000000){
    a=30000+(20/100)*a;
    printf("%.2f",a); } } }
    if (a>1000000){
    a=130000+30/100*(a-1000000);
    printf("%.2f",d); }
	return 0; }