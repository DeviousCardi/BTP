#include <stdio.h>
#include <stdlib.h>
	int fact(int n){
	    if(n==1)
	    return 1;
	    else
	    return n*fact(n-1); }
	int catalan(int n){
	   if(n==0)
	   return 1;
	   else if (n==1)
	   return 1;
	   else
	   return ((fact(n-1)*2*n*(2*n-1.0))/(fact(n)*(n+2.0)))*catalan(n-1); }
int main(){
int n,t;
scanf("%d\n",&n);
for(i=0;i<n;i++){
    scanf("%d\n",%t);
printf("%d\n",catalan(t)); }
	return 0; }