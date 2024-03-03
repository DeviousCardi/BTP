#include<stdio.h>
int main() {
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a*a+b*b==c*c) {
        printf("RIGHT\n"); }
    if(a*a+b*b>c*c) {
        printf("OBTUSE\n"); }
    if(a*a+b*b<c*c) {
        printf("ACUTE\n"); }
    if(a+b<c) {
        printf("INVALID\n"); }
    return 0; }