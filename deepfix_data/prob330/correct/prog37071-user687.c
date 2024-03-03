#include <stdio.h>
int main(){
    int n,c=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<n-1;i++) {
        c=((a[i]>a[i-1])&&(a[i]>a[i+1]))?c+1:c; }
    printf("%d",c);
    return 0; }