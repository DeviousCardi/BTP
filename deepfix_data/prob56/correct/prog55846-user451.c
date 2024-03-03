#include <stdio.h>
#include <stdlib.h>
 int c(int n){
     if(n==0){
     return 1;}
      else if(n==1){
         return 1; }
     else if(n>1){
      return c(n)-c(n-1); } }
int main() {
	int t,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	 scanf("%d",&k);
	 c(k);
	 if(k>1){
	     printf("%d",c(k+1));}
	     else
	     printf("%d",0); }
	return 0; }