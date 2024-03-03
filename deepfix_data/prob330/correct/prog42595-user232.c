#include <stdio.h>
int main(){
    int n,i,j,peak;
    scanf("%d",&n);
    int a[n];
    peak=0;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(j=0;j<n-2;j++) {
     if(a[j]<a[j+1]&&a[j+1]>a[j+2])
     peak++; }
    printf("%d",peak);
    return 0; }