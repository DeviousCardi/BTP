#include <stdio.h>
int main(){
    int n,i,a[100],s=0,peak=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
       if(a[i-1]<a[i]&&a[i+1]<a[i]) {
             peak ++;
             s=peak; }
        else
        peak=0; }
    printf("%d",s);
    return 0; }