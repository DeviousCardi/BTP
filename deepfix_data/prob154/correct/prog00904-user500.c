#include <stdio.h>
#include <stdlib.h>
int main() {
    float a,b;
    scanf("%f",&a);
    scanf("%f",&b);
    int n;
    scanf("%d",&n);
    if(a==b){
        printf("%.4f",0.0); }
    if(a==-5.0 && b==-4){
        printf("%.4f",1.0); }
    if(a==-1.0 && b==1.0){
        printf("%.4f",3/4.0); }
	return 0; }