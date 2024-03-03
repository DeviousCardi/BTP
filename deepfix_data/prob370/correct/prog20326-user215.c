#include<stdio.h>
int main() {
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if((a+b<=c)&&(b+c<=a)&&(c+a<=b)) {
        printf("INVALID\n"); }
    else {
    if(a*a+b*b==c*c) {
        printf("RIGHT\n"); }
    if(a*a+b*b>c*c) {
        printf("OBTUSE\n"); }
    if(a*a+b*b<c*c) {
        printf("ACUTE\n"); } }
    return 0; }