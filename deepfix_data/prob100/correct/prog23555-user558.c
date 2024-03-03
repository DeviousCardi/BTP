#include<stdio.h>
#include<limits.h>
int a,b;
int min(int a,int b) {
    if(a<b)
    return a;
    else
    return b; }
int main() {
    int m,n,i,j,x=0,y;
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
    for(int i=0;i<m;i++) {
        y=min(y,b[i]); }
    printf("%d",y);
    return 0; }