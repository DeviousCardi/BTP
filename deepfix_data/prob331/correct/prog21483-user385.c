#include <stdio.h>
int main() {
 int n,a,i,j,f=1;
 scanf("%d\n",&n);
 for(i=1;i<=n;i=i+1) {
     for(j=1;j<=n;j++)
    { scanf("%d",&a);
     if(i==j) {
    if(a==1)
      f=1;
     else
     f=0; }
     if( i!=j )
     {if(a==0)
     f=1;
     else
     f=0;}
      if(f==0)
      printf("n");
      return 0; }
 }  if(f==0) printf("y");
    return 0; }