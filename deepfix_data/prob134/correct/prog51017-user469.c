#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int f,b,n,count=0,k;
    f=-1;
    scanf("%d",&b);
    for(k=0;k<=20;k++){
     for(n=0;n<=20;n++){
       if(b==B(n,k)) {
       count=1 ;
        break;
       }}
       if(count=1){
        printf("%d %d\n",n,k);} }
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