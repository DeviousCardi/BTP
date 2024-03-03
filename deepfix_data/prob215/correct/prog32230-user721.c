#include <stdio.h>
#include <stdlib.h>
int main() {
	       int n,i,a,sum=0;
	       scanf("%d",&n);
	       for (i=2;i<n;i++){
	           if (n%i==0){
	               a=i;
	               sum=sum+a; } }
	       if (sum+1==n){
	           printf("Yes"); }
	       else{
	           printf("No"); }
	return 0; }