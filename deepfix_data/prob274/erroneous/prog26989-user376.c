#include <stdio.h>
int main(){
    int n,i,j,t,k;
    scanf("%d",&n);
    int a[n],c[n+1];
    for(i=0;i<=n-1;i++) {
        scanf("%d",a[i]);
        if(a[i]>c[i]) {
            c[]=i+1;
            c[i+1]=a[i]; }
        else
            c[i]=i+1; }
    for(i=0;i<=n;i++) {
        for(j=i;j<=n;j++) {
            if(c[i]==c[j]);
            t=j;
            k=t-i; } }
      printf("%d %d",t,k);
    return 0; }