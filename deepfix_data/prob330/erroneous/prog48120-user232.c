#include <stdio.h>
int main(){
    int n,i,j,peak;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[]); }
    for(j=0;j<n-2;j++) {
     if(a[j]<a[j+1]&&a[j+1]>a[j+2])
     peak++; }
    printf("%d",peak);
    return 0; }