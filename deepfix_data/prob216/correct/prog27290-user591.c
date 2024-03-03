#include <stdio.h>
#include <stdlib.h>
int a(int k) {
 if (k==0)
  return 0;
  if (k==1)
  return 0;
  if(k==2)
  return 1;
  else
return a(k-1)+ a( k-2); }
int main(){
    int t,k,p;
    scanf("%d",&t);
   for(k=0;k<t;k=k+1){
   scanf("%d",&k);
  p = a(k);
   printf("%d\n",p); }
return 0; }