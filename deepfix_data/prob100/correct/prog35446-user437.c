#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j;
    scanf("%d",&n);
    int a[n];
    scanf("%d\n",&m);
    for(i=1;i<=m;i++){
        for(j=0;j<n;j++)
        scanf("%d ",&a[j]); }
       for(i=1;i<=m;i++){
           for(j=1;j<n;j++){
               if(a[j]>=a[0]){
                   a[0]=a[j]; } } }
    return 0; }