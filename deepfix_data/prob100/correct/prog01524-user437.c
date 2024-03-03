#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,k;
    scanf("%d",&n);
    int a[n];
    scanf("%d\n",&m);
    for(i=1;i<=m;i++){
        for(j=0;j<n;j++)
        scanf("%d ",&a[j]); }
       for(i=1;i<=m;i++)
           for(k=0;k<=m;k++) {
           for(j=1;j<n;j++){
               if(a[j]>=a[0]){
                   a[0]=a[j]; }
               } a[k]=a[0]; }
          for(k=1;k<=m;k++){
              if(a[k]<=a[0]){
                  a[0]=a[k]; } }
             printf("%d",a[k]);
    return 0; }