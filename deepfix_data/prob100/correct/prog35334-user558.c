#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i,j,a[m][n],b[m],k,x=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]); }
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            if(a[i][j]>x) {
                for(k=0;k<m;k++) {
                    x=a[i][j];
                    b[k]=x; } } } }
    for(k=0;k<m;k++)
printf("%d ",b[k]);
    return 0; }