#include<stdio.h>
int main() {
    int a,b,c,f=0,g=0;
    scanf("%d%d%d",&a,&b,&c);
    if(((a-b)*(a-c))<=0) {
        f=b;
        b=a;
        a=f;
    }else
    if(((c-b)*(c-a))<=0) {
       f=b;
       b=c;
       c=f; }
    if(a>c) {
        g=a;
        a=c;
        c=g; }
    printf("%d%d%d",a,b,c);
    return 0; }