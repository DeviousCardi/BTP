#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i,j,a[m][n],x=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]); }
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            if(a[i][j]>x)
            x=a[i][j]; } }
    printf("%d",x);
    return 0; }