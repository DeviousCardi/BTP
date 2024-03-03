#include <stdio.h>
#include <stdlib.h>
int k;
int catalan(int m, int n,double t, double prod) {
    int i;
  if(m>n) {
      i=0;
      return i; }
  prod=prod*((double)(n+m)/m);
  m++;
  if(t==prod) {
      i=1;
      return i; }
  i=catalan(m,n,t,prod);
  return i; }
int main() {
int j,i,d=0,p;
double t;
scanf("%d\n",&p);
for(j=0;j<p; j++) {
    scanf("%lf",&t);
    if(t==0.0)
    printf("no\n");
    else if(t==1.0)
    printf("yes\n");
    else
    {for(i=2; i<18; i++) {
    if(catalan(2,i,t,1)==1)
    { d=1;
     ;break;} }
    if(d==1)
    printf("yes\n");
    else
    printf("no\n"); } }
return 0; }