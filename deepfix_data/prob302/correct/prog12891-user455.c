#include <stdio.h>
int main() {
    float a,b,c,d,e,f,s;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    s=e*e-(a+c)*e+a*c+f*f-(b+d)*f+b*d;
    if(s<0) {
        printf("Point is inside the rectangle"); }
     if(s==0) {
        printf("Point is on the rectangle"); }
     if(s<0) {
        printf("Point is outside the rectangle"); }
 return 0; }