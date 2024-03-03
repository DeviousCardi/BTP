#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
int main() {
    int f,b,i,j;
    f=-1;
    scanf("%d",&b);
    for(j=0;j<=20;){
     for(i=0;i<=20;i++){
       if(b==B(i,j)) {
        printf("%d %d",i,j);
        break;}
    else if(i==20&&j==20){
        printf("%d",f);}
        else
        i=i+1;
            }}
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