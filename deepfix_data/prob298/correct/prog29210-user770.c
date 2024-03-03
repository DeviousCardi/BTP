#include <stdio.h>
#include <stdlib.h>
int k;
int catalan(int m, int n,int t, float prod) {
    int i;
  if(m>n) {
      i=0;
      printf("\n%f\n", prod);
      return i; }
  prod=prod*((float)(n+m)/m);
  m++;
  if(t==(int)prod) {
      i=1;
      printf("\n%f\n", prod);
      return i; }
  i=catalan(m,n,t,prod);
  return i; }
int main() {
int j,i,t,d=0,p;
scanf("%d\n",&p);
for(j=0;j<p; j++) {
    scanf("%d",&t);
    if(t==0)
    printf("yes\n");
    else
    {for(i=2; i<18; i++) {
    if(catalan(2,i,t,1)==1)
    { d=1;
     ;break;}
    }}
    if(d==1)
    printf("yes\n");
    else
    printf("no\n"); }
return 0; }