#include <stdio.h>
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++) {
        c[b[i]]=a[i]; }
    for(i=0;i<n;i++)
    printf("%d ",c[i]);
    printf("end"); }