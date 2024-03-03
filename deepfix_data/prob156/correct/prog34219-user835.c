#include <stdio.h>
int main() {
    int m,n,i,j,a[50],sum,k,b[100];
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++) {
        b[i]=0; }
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d ",&a[j]);
            b[i]=b[i]+a[j]; } }
    int max;
    max=b[0];
    for(i=0;i<n;i++) {
        if(b[i]>max)
        b[i]=max; }
    printf("%d",max);
    return 0; }