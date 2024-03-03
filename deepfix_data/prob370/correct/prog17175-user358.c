#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    {if(c*c==a*a+b*b||a*a==c*c+b*b||a*a+c*c==b*b)
    printf("RIGHT");
        if(a+b<=c||a+c<=b||b+c<=a)
    printf("INVALID");
    else{
    {if(c*c<a*a+b*b||a*a<c*c+b*b||b*b<a*a+c*c)
    printf("ACUTE");
    else { } } } }
    return 0; }