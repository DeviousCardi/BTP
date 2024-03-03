#include<stdio.h>
int pro(int n) {
    int b,mul=n;
    scanf("%d ",&b);
    if(b!=EOF)
    mul=n*b;
    if(b==EOF)
    mul=n*1;
    return pro(mul); }
int main() {
    int n,a,m;
    scanf("%d\n",&n);
    scanf("%d",&a);
    m=pro(a);
    printf("%d",m);
    return 0; }