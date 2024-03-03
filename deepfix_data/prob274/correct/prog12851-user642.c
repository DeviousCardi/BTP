#include <stdio.h>
int main(){
    int n,i,j,t,k;
    scanf("%d\n",&n);
    int a[n+1],b[n+1];
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    b[1]=a[1];
    for(i=2;i<=n;i++) {
        b[i]=a[a[i]];
        printf("%d ",b[i]); }
    return 0; }