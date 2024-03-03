#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
   if(n==0) return 1;
   return ((2.0*(2*n-1))/n+1)*catalan(n-1); }
int main() {
	int arr[100];int t;int i;
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
	    scanf("%d\n",&arr[i]); }
printf("%d",catalan(3));
	return 0; }