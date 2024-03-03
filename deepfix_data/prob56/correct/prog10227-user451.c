#include <stdio.h>
#include <stdlib.h>
 int c(int n,int k){
     if(n<k){
         return 0;}
    else if(n==0&&k==0){
        return 1; }
    else if (k==0){
        return 1;}
        else {
        return c(n-1,k)+(n-1,k-1); } }
int main() {
	int n=1,t,m,i,k,sum=0;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	 scanf("%d",&k);
   c(k,i);
   for(i=0;i<=k;i++){
         sum=sum+c(k,i)*c(k,i); }
	 if(k>=0){
	     printf("%d\n",(1/k+1)*sum); }
	     else
	     printf("%d\n",0); }
	return 0; }