#include <stdio.h>
#include <stdlib.h>
     int c(int n){
     if(n==0)
     return 1;
     else
      return (c(2n-1,n-1)+c(2n-1,n)*(1/(n+1)); }
int main() {
	int i,p;
	int a[20];
	scanf("%d\n",&p);
	for(i=0;i<p;i++){
	    scanf("%d\n",&a[i]);
	    printf("%d\n",c(a[i])); }
	return 0; }