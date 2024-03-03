#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
if(n==0)
return 1;
if(n==1)
return 1;
else
return 2*(2*n-1)*cat(n-1)/(n+1); }
int main() {
     int t,n,j,k;
     scanf("%d",&t);
     for(j=0;j<t;j=j+1){
     scanf("%d",&n);
if(cat(n)<k)
break;
 printf("%d\n",cat(n-1)); }
return 0; }