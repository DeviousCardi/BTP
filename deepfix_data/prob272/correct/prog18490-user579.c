#include <stdio.h>
int main(){
 int x,y,i,j=0,a1,a2,n;
 scanf("%d %d %d",&a1,&a2,&n);
 if(n==1)
 printf("%d",a1);
 else if(n==2)
 printf("%d",a2);
 else if(n>2)
 {x=a1;
 y=a2;
 for(i=1;i<=n;i++) {
 j=a1+a2-2;
 a1=a2;
 a2=j; }
 printf("%d",j);
  }  return 0; }