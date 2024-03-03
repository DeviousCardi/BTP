#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float a,b,n;
    scanf("%f%f%f",&a,&b,&n);
    int i;float area=0;
    for(i=a;i<b;i=i+ (b-a)/n){
    area=area+abs(2*i*i*i-8*1)*(b-a)/n; }
    printf("%1.4f",area);
	return 0; }