#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    int sum=0,i;
   if(n==0){
       return 1; }
   else{
       for(i=0;i<=n-1;i++){
           sum=sum + cat(i)*cat(n-1-i); }
       return sum; } }
int main() {
	int t,i,j=0,arr[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&arr[i]);
	    while(cat(j)<=arr[i]){
	        j++; }
	    printf("%d\n",cat(j));
	    j=0; }
	return 0; }