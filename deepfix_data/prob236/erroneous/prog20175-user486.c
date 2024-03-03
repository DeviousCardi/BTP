#include <stdio.h>
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {   k=a[b[i]];
        a[b[i]]=a[i];
        a[i]=k; }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("end") }