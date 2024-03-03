#include <stdio.h>
int main(){
    int n,a[1000],t,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
scanf("%d ",&a[i]); }
   for(i=1;i<n;i++) {
       if(a[i]==a[0]) {
           printf("%d %d",i+1,i);
           break; } }
    return 0; }