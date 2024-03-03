#include <stdio.h>
#include <stdlib.h>
int a(int j) {
if(j==0)
return 1; }
 int main() {
     int n,j,t,p;
     scanf("%d",&t);
     for(j=0;j<t;j=j+1)
     scanf("%d",&j);
 p=a(j);
 printf("%d",p);
return 0; }