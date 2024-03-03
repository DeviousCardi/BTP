#include <stdio.h>
#include <stdlib.h>
int cat(int n+1) {
   if (n+1==0){
       return 1; }
    return ((2*((2*n)+1)*cat(n))/n+2); }
int main() {
	int t,i,n=0,count=0;
	scanf("%d",&t);
	int arr[t];
	for (i=0;i<t;i++){
	    scanf("%d",&arr[i]); }
	for (i=0;i<t;i++){
	    while (n<=17){
	         if(arr[i]==cat(n)){
	            printf("yes\n");
	            count++;
	            break; }
	        n++; }
	    if (count==0){
	        printf("no\n"); }
	    n=0;
	    count=0; }
	return 0; }