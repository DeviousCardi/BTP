#include <stdio.h>
#include <stdlib.h>
int main() {
   int a,b,c;
   int d,e,f;
   scanf("%d %d %d",&a,&b,&c);
  d=a*a+c*c-b*b;
  e=a*a+b*b-c*c;
  f=b*b+c*c-a*a;
if (b>=a && b>=c ) {
  if(d==0)
  printf("Right Triangle");
  else if(d>0)
  printf("Not Right Triangle");
  else
  printf("Cannot form a Triangle"); }
else if (c>=a && a>=b) {
  if(e==0)
  printf("Right Triangle");
  else if(e>0)
  printf("Not Right Triangle");
  else
  printf("Cannot form a Triangle"); }
else {
  if(f==0)
  printf("Right Triangle");
  else if(f>0)
  printf("Not Right Triangle");
  else
  printf("Cannot form a Triangle"); }
 return 0; }