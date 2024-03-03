#include<stdio.h>
int main() {
    int a,b,c,f=0,g=0;
    scanf("%d%d%d",&a,&b,&c);
    if(((a-b)*(a-c))<=0) {
        b=f;
        b=a;
        a=f;
    }else
    if(((c-b)*(c-a))<=0) {
       b=f;
       b=c;
       c=f; }
    if(a>c) {
        a=g;
        a=c;
        c=g; }
    printf("%d%d%d",a,b,c);
    return 0; }