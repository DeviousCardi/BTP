#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&a>c) {
        if(a>=b+c)
        printf("INVALID");
        else if(a*a<(b*b+c*c))
        printf("ACUTE");
        else if(a*a==(b*b+c*c))
        printf("RIGHT");
        else
        printf("OBTUSE"); }
    else if(b>=a&b>c) {
        if(b>=a+c)
        printf("INVALID");
        else if(b*b<(a*a+c*c))
        printf("ACUTE");
        else if(b*b==(a*a+c*c))
        printf("RIGHT");
        else
        printf("OBTUSE"); }
    else if(c>=a&c>b) {
        if(c>=a+c)
        printf("INVALID");
        else if(c*c<(a*a+b*b))
        printf("ACUTE");
        else if(c*c==(a*a+b*b))
        printf("RIGHT");
        else
        printf("OBTUSE"); }
    else if(a==b&a==c) {
        printf("INVALID"); }
    return 0; }