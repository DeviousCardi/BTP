#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b+c||b>a+c||c>a+b) {
        printf("INVALID"); }
    else {
        if (a>b&&b>c) {
            if(a*a<b*b+c*c)
            printf("ACUTE");
            else if(a*a==b*b+c*c)
            printf("RIGHT");
            else
            printf("OBTUSE"); } } }