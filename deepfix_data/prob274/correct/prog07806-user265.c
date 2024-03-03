#include <stdio.h>
int main(){
    int n,a[1000],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
scanf("%d ",&a[i]); }
   for(i=a[0]-1;i<n;i=j) {
       if(a[i]==a[0]) {
           printf("%d %d",i+1,i);
           break; }
       else
       j=a[i]; }
    return 0; }