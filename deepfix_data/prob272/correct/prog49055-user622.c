#include <stdio.h>
int main(){
 int i,a1,a2,n,T;
 scanf("%d%d%d",&a1,&a2,&n);
 for(i=1;i<=n;i++)
{ if(n==1)
{T=a1;}
else if(n==2){
    T=a2;}
else if(n>2) {
T=a2+a1-2;
T++;}}
   printf("%d",T);
  return 0; }