#include <stdio.h>
int main(){
    int n,t,k,i,j,count=0,q=0;
    scanf ("%d\n",&n);
    int a[n],x[n];
    a[0]=0;
    for (i=1;i<=n;i++) {
        scanf ("%d",&a[i]); }
    x[0]=0;
    x[1]=a[1];
    x[2]=a[x[1]];
    for (i=1;i<=n;i++) {
        for (j=1;j<=n;j++) {
            if (a[i]=a[j]) {
                q++;
                break; }
        }if (q>0) {
            break; } }
    for(i=1;x[i+1]!=a[1];i++) {
        x[i+1]=a[x[i]];
        count++; }
    printf ("%d ",count);
    printf ("%d",i-j) ;
    return 0; }