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
     int t,n,i,j;
     scanf("%d",&t);
     for(j=0;j<t;j=j+1){
     scanf("%d",&n);
        for(i=1;i<1000;i++)
        if(cat(i)>n)
        break;
 printf("%d\n",cat(i-1)); }
return 0; }