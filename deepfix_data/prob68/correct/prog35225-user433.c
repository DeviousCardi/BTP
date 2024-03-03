#include<stdio.h>
int func(int a[],int n) {
    static long int p=1;
    if(n==0)
    return p;
    p=p*a[n-1];
    return func(a,n-1); }
int main() {
    int b[100],m;
    scanf("%d\n",&m);
    for(int i=0;i<m;i++)
    scanf("%d",&b[i]);
    printf("%d",func(b,m));
    return 0; }