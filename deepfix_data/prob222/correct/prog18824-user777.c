#include <stdio.h>
int main() {
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    float A;
    float B;
    float C;
    A=a*40/50+d*60/100;
    B=b*40/50+e*40/100;
    C=c*40/50+f*60/100;
    if((A<=B)&&(B<=C))
    printf("Median weighted score =%.2f",B);
	  return 0; }