#include<stdio.h>
int n;
int diff(int);
int main() {
    scanf("%d/n",&n);
    int d;
    d=diff(n);
    printf("%d",d);
    return 0; }
int diff(int x) {
    int a[n],i;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int f;
    if (x==1)
        return(a[0]);
    else
    {    f=(a[x-1]-diff(x-1));
        return(f); }
    prinf("%d %d",a[x-1],a[0]); }