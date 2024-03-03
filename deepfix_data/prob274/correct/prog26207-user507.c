#include <stdio.h>
int main(){
    int n,t,k,i,count=0;
    scanf ("%d\n",&n);
    int a[n],x[n];
    a[0]=0;
    for (i=1;i<=n;i++) {
        scanf ("%d",&a[i]); }
    x[1]=a[1];
    for(i=1;x[i]!=a[1];i++) {
        x[i+1]=a[x[i]];
        count++; }
    return 0; }