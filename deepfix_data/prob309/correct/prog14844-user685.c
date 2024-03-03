#include <stdio.h>
int main() {
    int a[100],i,j,k,b[100]={0},n,l;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(j=0;j<n;j++){
        k=a[j];
        b[k-1]++; }
    for(l=0;l<n;l++){
       printf("%d",b[k]); }
    return 0; }