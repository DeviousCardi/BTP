#include <stdio.h>
int main(){
    int n,i,peak=0,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++)
    if(a[i-1]<a[i]&&a[i+1]<a[i]) {
           for(i=0;i<n;i++)
           peak=a[i];
           printf("%d",peak); }
    return 0; }