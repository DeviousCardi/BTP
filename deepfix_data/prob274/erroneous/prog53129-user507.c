#include <stdio.h>
int main(){
    int n,t,k,i,count=0;
    scanf ("%d\n",&n);
    int a[n],x[n];
    a[0]=0;
    for (i=1;i<=n;i++) {
        scanf ("%d",&a[i]); }
    x[0]=0;
    x[1]=a[1];
    x[2]=a[x[1]]
    for(i=2;x[i+1]=a[1];i++) {
        x[i+1]=a[x[i]];
        count++; }
    printf ("%d ",count+1);
    printf ("%d",count) ;
    return 0; }