#include <stdio.h>
#include <stdlib.h>
	int catalan(int n){
	   if(n==0)
	   return 1;
	   else if (n==1)
	   return 1;
	   else
	   return ((2*(2*n-1.0))/((n+1.0)))*catalan(n-1); }
int main(){
int n,t,i;
scanf("%d\n",&n);
for(i=0;i<n;i++){
    scanf("%d\n",&t);
printf("%d\n",catalan(t)); }
	return 0; }