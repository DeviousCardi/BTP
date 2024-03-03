#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int j=1;j<=n;j++)
    a[j]=0;
    int k;
    for(int i=1;i<=2*n;i++) {
        scanf("%d",&k);
        a[k]=i-a[k]; }
    int m=200;
    for(int j=1;j<=n;j++) {
        if(a[j]<m)
        m=a[j]; }
    printf("%d",m);
    return 0; }