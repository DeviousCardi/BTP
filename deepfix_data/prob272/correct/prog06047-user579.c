#include <stdio.h>
int main(){
 int x,y,i,T=0,a1,a2,n;
 scanf("%d %d %d",&a1,&a2,&n);
 if(n==1)
 printf("%d",a1);
 else if(n==2)
 printf("%d",a2);
 else if(n>2)
 {x=a1;
 y=a2;
 for(i=3;i<=n;i++) {
 T=x+y-2;
 x=y;
 y=T; }
 printf("%d",T);
  }  return 0; }