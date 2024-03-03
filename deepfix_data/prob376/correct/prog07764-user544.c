#include <stdio.h>
#include <stdlib.h>
     int c(int n,int r){
     if(n==0||r==0)
     return 1;
     else
     r=n;
     return (c(2*n-1,r-1)+c(2*n-1,r))/(n+1); }
int main() {
	int i,p,r;
	int a[20];
	scanf("%d\n",&p);
	for(i=0;i<p;i++){
	    scanf("%d\n",&a[i]);
	    printf("%d\n",c(a[i],a[i])); }
	return 0; }