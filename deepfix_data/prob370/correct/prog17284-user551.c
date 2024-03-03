#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a)) {
        if((a*a+b*b>c*c)&&(a*a+c*c>b*b)&&(b*b+c*c>a*a)) {
            printf("ACUTE"); }
        else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a)) {
            printf("RIGHT"); }
        else if((a*a+b*b>c*c)||(a*a+c*c>b*b)||(b*b+c*c>a*a)) {
            printf("OBTUSE"); } }
    else {
        printf("INVALID"); }
    return 0; }