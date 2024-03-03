#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
int main() {
	int t,i,j,k;
	scanf("%d",&t);
	for(j=1;j<t+1;j=j+1){
	    scanf("%d",&j);
	    i=1;
	   for(k=1;k<j+1;k=k+1){
	   i=i+(factorial(2*k))/(factorial(k+1)*factorial(k));}
	   printf("%d\n",i);}
	return 0; }
int factorial(int n){
    if(n<=1)
    return 1;
    else
    return (n*factorial(n-1)) ; }