#include <stdio.h>
#include <stdlib.h>
int c(int n) {
     if(n!=0)
     return (((4*n)-2)*c(n-1)/n+1);
     else
     return 1; }
int main() {
	int t,a[100],i,j,sum;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&a[i]);}
	    for(i=0;i<t;i++) {
	        sum=0;
	        for(j=0;j<a[i];j++) {
	            sum=sum+c(j); }
	    printf("%d\n",sum); }
	return 0; }