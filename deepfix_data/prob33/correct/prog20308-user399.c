#include<stdio.h>
int main() {
    int h,p;
    scanf("%d%d",&h,&p);
    int a,b;
    scanf("%d",&a);
    while(p>=2) {
        scanf("%d",&b);
        if(b<a)
            h+=b-1;;
        a=b;
        p--; }
    if(h>0)
        printf("Yes");
    else
        printf("No"); }