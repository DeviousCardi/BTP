#include <stdio.h>
int main() {
    float a1,a2,a3,b1,b2,b3,m1,m2,m3;
    scanf("%f%f%f%f%f%f",&a1,&a2,&a3,&b1,&b2,&b3);
    m1=a1*40/50.0+b1*60/100.0;
    m2=a2*40/50.0+b2*60/100.0;
    m3=a3*40/50.0+b3*60/100.0;
    if(m1>m2&m2>m3)
    printf("Median weighted score=%.2f",m2);
    else if(m1>m2&m2<m3) {
        if(m2>m3)
        printf("Median weighted score=%.2f",m2);
        else if(m3<m2)
        printf("Median weighted score=%.2f",m2); }
    printf("%f",m2);
    return 0; }