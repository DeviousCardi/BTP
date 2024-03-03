#include <stdio.h>
int main(){
    int n,i,a[100],peak=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
       if(a[i-1]<a[i]&&a[i+1]<a[i]) {
             peak ++; }
        else
        peak=0; }
    printf("%d",peak);
    return 0; }