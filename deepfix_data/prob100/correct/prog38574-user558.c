#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i,j,x=0;
    scanf("%d %d",&n,&m);
    int a[m][n],b[m];
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]); }
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            if(a[i][j]>x)
            x=a[i][j]; }
        b[i]=x; }
    for(i=0;i<m;i++) {
        for(j=i+1;j<m;j++) {
            if(b[i]<m)
            m=b[i]; } }
    printf("%d",m);
    return 0; }