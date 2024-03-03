#include<stdio.h>
int main() {
    int i,j,n,m,max=0;
    scanf("%d%d",&n,&m);
    int a[m][n];
    for(i=0;i<m;i++) {
        int sum=0;
        for(j=1;j<n;j++) {
        scanf("%d",&a[i][j]);
        sum+=a[i][j]; }
        if(sum>max)
        max=sum; }
    printf("%d",max); }