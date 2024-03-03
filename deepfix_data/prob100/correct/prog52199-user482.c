#include<stdio.h>
#include<limits.h>
int main() {
    int m=0;
    int n=0;
    scanf("%d%d",&n,&m);
    int a[m][n];
    int i=0;
    int j=0;
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[i][j]); } }
    return 0; }