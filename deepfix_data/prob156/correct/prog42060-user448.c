#include <stdio.h>
int main() {
int a[1000];
int i,j,k,sum=0;
int n,m;
scanf ("%d%d",&n,&m);
for (i=0;i<n;i++){
    for (j=0;j<m;j++){
        scanf("%d",&k);
        sum=sum+k; }
    a[i]=sum;
    sum=0; }
for (i=0;i<n-1;i++){
    if (a[i]>a[i+1]){
        k=a[i];
        a[i]=a[i+1];
        a[i+1]=k; }
    else continue; }
    return 0; }