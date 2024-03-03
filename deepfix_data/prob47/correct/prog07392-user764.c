#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
int main() {
	int t,i,j,k,a;
	scanf("%d",&t);
	for(j=1;j<t+1;j=j+1){
	    scanf("%d",&a);
	   for(k=0;k<a;k=k+1){
	        i=0;
	   i=i+((factorial(2*k))/(factorial(k+1)*factorial(k)));}
	   printf("%d\n",i);}
	return 0; }
int factorial(int n){
    if(n<1)
    return 1;
    else
    return (n*factorial(n-1)) ; }