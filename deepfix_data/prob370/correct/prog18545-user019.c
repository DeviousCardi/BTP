#include<stdio.h>
int main() {
    int a,b,c,temp;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b) {
        temp=a;
        a=b;
        b=temp; }
    if(b>c&&c>a) {
        temp=c;
        c=b;
        b=temp; }
    if(c<a) {
        temp=b;
        b=a;
        a=c;
        c=temp; }
    printf("%d%d%d",a,b,c);
    if(a*a+b*b==c*c)
    printf("RIGHT");
    if(a*a+b*b>c*c)
    printf("ACUTE");
    if(a+b<=c) {
    printf("INVALID");
    temp=0; }
    if(a*a+b*b<c*c&&temp!=0)
    printf("OBTUSE");
    return 0; }