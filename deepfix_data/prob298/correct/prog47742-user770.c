#include <stdio.h>
#include <stdlib.h>
int k;
int catalan(int m, int n,int t, double prod) {
    int i;
  if(m>n) {
      i=0;
      printf("%lf\n", prod);
      return i; }
  prod=((n+m)/m)*prod;
  m++;
  if(t==prod) {
      i=1;
      return i; }
  i=catalan(m,n,t,prod);
  return i; }
int main() {
int j,i,d,p;
int t;
scanf("%d\n",&p);
for(j=0;j<p; j++) {
    d=0;
    scanf("%d",&t);
    if(t==0)
    printf("no\n");
    else if(t==1)
    printf("yes\n");
    else
    {for(i=2; i<18; i++) {
    if(catalan(2,i,t,1)==1)
    { d=1; break;} }
    if(d==1)
    printf("yes\n");
    else
    printf("no\n"); } }
return 0; }