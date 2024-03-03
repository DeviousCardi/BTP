#include <stdio.h>
int main() {
    float a1,a2,a3,b1,b2,b3,m1,m2,m3;
    scanf("%f%f%f%f%f%f",&a1,&a2,&a3,&b1,&b2,&b3);
    m1=a2*40/50.0+b2*60/100.0;
    m2=a2*40/50.0+b2*60/100.0;
    m3=a2*40/50.0+b2*60/100.0;
    if(m1>m2&m1>m3)
    printf("Median weighted score=%.2f",m1);
    return 0; }