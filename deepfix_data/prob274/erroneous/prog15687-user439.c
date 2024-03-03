#include <stdio.h>
int main(){
    int j,k,i,n=0;
    scanf("%d",&n);
    int a[104];
    int b
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<n;i++) {
    b[1]=a[1];
    b[i+1]=a[b[i]]; }
    return 0; }