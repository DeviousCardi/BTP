#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
if(n==0)
return 1;
if(n==1)
return 1;
else
return 2*(2*n-1)*cat(n-1)/n+1; }
int main() {
     int t,p,n;
     scanf("%d",&n);
     for(n=0;n<t;n=n+1){
 p=cat (n);
 printf("%d\n",p); }
return 0; }