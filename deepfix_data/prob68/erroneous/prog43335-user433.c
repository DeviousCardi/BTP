#include<stdio.h>
long func(int a[],int n) {
    static long p=1;
    if(n==0)
    return p;
    p=p*a[n-1];
    return func(a,n-1); }
int main() {
    int b[m],m;
    scanf("%d\n",&m);
    for(int i=0;i<m;i++)
    scanf("%d",&b[i]);
    printf("%ld",func(b,m));
    return 0; }