#include <stdio.h>
int main() {
 int n,a1,a2,x,y,t;
 scanf ("%d %d %d",&a1,&a2,&n);
 x=a1;
 y=a2;
 for(int i=0;i<n-2;i++) {
     t=x+y-2;
     x=y;
     y=t; }
 printf("%d",t);
 return 0; }