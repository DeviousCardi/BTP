#include<stdio.h>
int main() {
    int h,p;
    scanf("%d%d",&h,&p);
    int a,b,d;
    scanf("%d",&a);
    while(p>=2) {
        scanf("%d",&b);
        d=b-a;
        if(d<0)
            h+=d;
        a=b;
        p--; }
    if(h>0)
        printf("Yes");
    else
        printf("No"); }