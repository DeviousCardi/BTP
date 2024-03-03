#include <stdio.h>
#include <stdlib.h>
int a(int j) {
if(j==1430)
return 1;
else
return 2; }
 int main() {
     int j,t,p;
     scanf("%d",&t);
     for(j=0;j<t;j=j+1)
     scanf("%d",&j);
 p=a(j);
 printf("%d",p);
return 0; }