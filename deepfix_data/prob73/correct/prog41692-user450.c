#include <stdio.h>
int main() {
    int m,n,i,j,a[50],sum=0,z,b[50];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d",&a[j]); } }
    for(i=0;i<n;i++) {
        sum=0;
        for(j=0;j<m;j++)
        sum=sum+a[j];
        b[i]=sum; }
    for(i=0;i<n;i++) {
if(b[i+1]>b[i])
z=b[i+1]; }
    printf("%d",z);
    return 0; }