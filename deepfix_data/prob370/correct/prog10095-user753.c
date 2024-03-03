#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>=b+c||b>=a+c||c>=a+b) {
        printf("INVALID"); }
    else if(a*a>b*b+c*c||b*b>a*a+c*c||c*c>a*a+b*b) {
        printf("OBTUSE"); }
    else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b) {
        printf("RIGHT"); }
    else {
        printf("ACUTE"); }
    return 0; }