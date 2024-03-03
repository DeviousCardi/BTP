#include<stdio.h>
int main() {
    int a,b,c,l;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&b>c) {
        l=a;
        a=b;
        b=l; }
    if(c>b&&c>a) {
        l=a;
        a=c;
        c=l; }
    if((b+c)<a||(a-c)>b||(a-b)>c) {
        printf("INVALID\n"); }
    if((b*b+c*c)==(a*a)) {
        printf("RIGHT\n"); }
    float x=(a*a+c*c-b*b)/(2*a*b);
    if(x>=0.0) {
        printf("ACUTE\n"); }
    else
    printf("OBTUSE\n");
    return 0; }