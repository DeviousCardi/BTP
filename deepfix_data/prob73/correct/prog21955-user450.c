#include <stdio.h>
int main() {
    int m,n,i,j,a[50],sum=0,z,b[50];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) {
        sum=0;
        for(j=0;j<m;j++) {
            scanf("%d",&a[j]);
        sum=sum+a[j];}
        b[i]=sum; }
    int max=0;
    for(i=0;i<n;i++) {
if(b[i]>max)
max=b[i]; }
    printf("%d",max);
    return 0; }