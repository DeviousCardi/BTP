#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int f=-1,b,n,co=0,k;
    scanf("%d",&b);
    for(k=0;k<=20;k++) {
     for(n=0;n<=20;n++) {
       if(B(n,k)==b) {
           co=1;
           printf("%d %d",n,k);
          n=21;
          k=21; } } }
     if(co!=1) {
        printf("%d",f); }
   return 0; }
int B(int n,int k){
  if(n<k)
  return 0;
  else if(n==k||k==0)
  return 1;
  else
  return B(n-1,k)+B(n-1,k-1); }