#include <stdio.h>
#include <stdlib.h>
int main() {
    float a,b,c,d;
    scanf("%f",&a,&b,&c,&d);
    if (a<200000){
    printf("%.2f",a); }
    else {
    if (a>200001&&a<500000){
    int c=10*200000/100;
    printf("%.2f",c); }
    else {
    if (a>500001&&a,1000000){
    int b=30000+20*500000/100;
    printf("%.2f",b); } }
    if (a>1000000){
    int d=130000+30*1000000/100;
    printf("%.2f",d); }
	return 0; }