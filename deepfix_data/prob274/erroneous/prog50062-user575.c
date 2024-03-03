#include <stdio.h>
int main(){
    int n,i,m,j;
    scanf("%d",&n);
    int a[n+1],b[n],k,t=0;
    a[0]=1;
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
     for(k=0,i=0;k<n,i<n;i++,k++) {
        m=a[k];
        b[i]=m;
        t=t+1;
          for(j=0;j<k;i++) {
             if(b[j]==m);
             break; } }
        if
    printf("%d %d",t-1,t-2);
    return 0; }