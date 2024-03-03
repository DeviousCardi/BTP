#include<stdio.h>
int main() {
    int i,j,n,m,max=0;
    scanf("%d%d",&n,&m);
    int a[20][20];
    for(i=0;i<n;i++) {
        int sum=0;
        for(j=0;j<m;j++) {
            scanf("%d",&a[i][j]);
             sum+=a[i][j]; }
          if(sum>max) {
            max=sum; } }
        printf("%d",max); }