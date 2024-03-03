#include <stdio.h>
int main(){
    int n,i,m;
    scanf("%d",&n);
    int a[n+1],k,t=0;
    a[0]=1;
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
     for(k=0,i=0;k<n,i<n;i++,k++) {
        m=a[k];
        k=a[m];
        t=t+1;
         if(k==m)
            break;
         else
            k=i; }
    printf("%d %d",t-1,t-2);
    return 0; }