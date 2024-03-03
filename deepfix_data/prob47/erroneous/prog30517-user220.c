#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
   if(n==0)
   return 1;
   return (2*(2*(n-1)+1)/(n-1+2))catalan(n-1); }
int main(){
	int test;
	scanf("%d\n",&test);
	 int i,j,k;
	for(i=0;i<test;i++){
	    scanf("%d\n",&k);
	    int result=0;
	    for(j=0;j<k;j++){
	        result=result+catalan(j); }
	    printf("%d\n",result); }
	return 0; }