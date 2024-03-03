#include <stdio.h>
#include <stdlib.h>
     int c(int n,int r){
     if(r==0||r==n)
     return 1;
     else
     return (c((2*n)-1,r-1)+c((2*n)-1,r))/(n+1); }
int main() {
	int n,r;
	scanf("%d %d",&n, &r);
	printf("%d",c(n,r));
	return 0; }