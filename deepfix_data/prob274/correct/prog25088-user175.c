#include <stdio.h>
int main(){
    int n,i,a[250],k=0,j,m=0,h,b[250];
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++) {
    a[i]=h;
    a[h]=b[m];
    m++; }
    for(j=0;j<m-1;j++)
    printf("%d",m);
    return 0; }