#include <stdio.h>
int main() {
    int n,a[100],i,d;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    for(i=n-1;i>=n-d;i--){
        a[0]=a[i+1]; }
    for(i=0;i<n;i++){
        printf("%d ",a[i]); }
    return 0; }