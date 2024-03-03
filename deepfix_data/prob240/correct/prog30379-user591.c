#include <stdio.h>
#include <stdlib.h>
int fact(int n) {
if(n==0)
return 1;
else
return n*fact(n-1); }
int main() {
     int j,t,p;
     scanf("%d",&t);
     for(j=0;j<t;j=j+1){
     scanf("%d",&j);
 p=fact (j);
 printf("%d",p); }
return 0; }