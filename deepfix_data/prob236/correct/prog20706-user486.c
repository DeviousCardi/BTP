#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(j=1;j<n;j++)
    { printf("%d ",a[b[j]]);} }