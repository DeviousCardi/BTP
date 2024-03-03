#include<stdio.h>
int main() {
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if((a+b<=c)||(b+c<=a)||(c+a<=b)) {
        printf("INVALID\n"); }
    else {
    if(a*a+b*b==c*c) {
        printf("RIGHT\n"); }
    if((a*a+b*b>c*c)||(a*a+c*c>b*b)||(b*b+c*c>a*a)) {
        printf("OBTUSE\n"); }
    if((a*a+b*b<c*c)||(b*b+c*c<a*a)||(a*a+c*c<b*b)) {
        printf("ACUTE\n"); } }
    return 0; }