#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
int main() {
    int f,b,i,j,count=0;
    f=-1;
    scanf("%d",&b);
    for(j=0;j<=20;j++){
     for(i=0;i<=20;i++){
       if(b==B(i,j)) {
          count=count+1;
         break;
       }printf("%d\n",B(i,j));
     }}
     if(count==1)
     {printf("%d %d",j,i);}
     else
    { printf("%d",f);}
	return 0; }
int B(int n,int k){
  if(n<k)
  return 0;
  else if(n==k)
  return 1;
  else if(k==0)
  return 1;
  else
  return B(n-1,k)+B(n-1,k-1); }