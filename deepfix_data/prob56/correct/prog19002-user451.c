#include <stdio.h>
#include <stdlib.h>
 int c(int n,int k){
     if(n<k){
         return 0;}
     else if(k==0){
     return 1;}
      else if(k==0&&n==0){
         return 1; }
     else
      return (c(n,k)-c(n-1,k-1)); }
int main() {
	int n=1,t,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	 scanf("%d",&k);}
   c(n,k);
	 if(n>=1){
	     printf("%d",c(n,k));}
	     else
	     printf("%d\n",0);
	return 0; }