#include <stdio.h>
int main(){
    int n,i,peaks,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    if(a[i-1]<a[i]&&a[i+1]<a[i]) {
           printf("%d",a[i]); }
    return 0; }