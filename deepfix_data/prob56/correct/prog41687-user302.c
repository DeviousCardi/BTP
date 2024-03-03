#include <stdio.h>
#include <stdlib.h>
int c(int x){
    int sum=0,i;
   if(x==0)
   return 0;
   else if(x==1)
   return 1;
   else{
       for(i=0;i<x;i++){
      sum=sum+c(i-1)*c(x-i);}
      return sum; } }
int main(){
    int t,i,j,a;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&a);
        printf("%d",c(a)); }
	return 0; }