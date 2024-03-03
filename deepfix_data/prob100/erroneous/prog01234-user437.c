#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,k;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d ",&a[i][j]); }
    for(i=0;i<=m;i++) {
        for(k=0;k<n;k++) {
          if(a[k]>=a[0]){
              a[0]=a[k]; } }
    }  printf("%d",a[0])
        return 0; }