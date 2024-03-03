#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n+1],b[2*n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        b[i]=i;
        b[i+1]=a[i];
        printf("%d ",b[i]); }
    return 0; }