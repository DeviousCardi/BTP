#include<stdio.h>
int main() {
    int a,b,c,l;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&b>c) {
        l=a;
        a=b;
        b=l; }
    float x=(a*a+c*c-b*b)/(2*a*b);
    if(c>b&&c>a) {
        l=a;
        a=c;
        c=l; }
    if((b+c)<=a||(a-c)>=b||(a-b)>=c) {
        printf("INVALID\n"); }
    else
    if((b*b+c*c)==(a*a)) {
        printf("RIGHT\n"); }
    else
    if(x>=0.0&&x<1.0) {
        printf("ACUTE\n"); }
    else
    printf("OBTUSE\n");
    return 0; }