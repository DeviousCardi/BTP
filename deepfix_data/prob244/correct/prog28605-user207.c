#include <stdio.h>
#include <stdlib.h>
int main() {
    float a;
    scanf("%f",&a);
    if (a<=200000){
        a=0;
    printf("%.2f",a); }
    else {
    if (a>=200001&&a<500000){
    a=(10.0/100)*(a-200000);
    printf("%.2f",a); }
    else {
    if (a>=500001&&a<1000000){
    a=30000+(20.0/100)*(a-500000);
    printf("%.2f",a); } } }
    if (a>1000000){
    a=130000+30.0/100*(a-1000000);
    printf("%.2f",a); }
	return 0; }