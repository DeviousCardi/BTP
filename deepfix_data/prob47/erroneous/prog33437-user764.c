#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
int main() {
	int t,i,j,k;
	scanf("%d",&t);
	for(i=1;i<t+1;t=t+1){
	    scanf("%d",&j);
	   for(k=1;k<j+1;k=k+1){
	   i=1+(factorial(2*k))/(factorial(k+1)*factorial(k));}
	   printf("%d"k);}
	return 0; }
int factorial(int n){
    if(n=0)
    return 1;
    else
    return (n*factorial(n-1)) ; }