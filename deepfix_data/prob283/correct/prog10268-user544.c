#include <stdio.h>
#include <stdlib.h>
 int A(int m,int n){
     if(m==0)
     return n+1;
     if(m>0&&n==0)
     return A(m-1,1);
     if(m>0&&n>0)
     return A(m-1,A(m,n-1)); }
int main() {
	int k,m,n,y,a,b;
	scanf("%d",&k);
	y=A(m,n);
	a=m;
	b=n;y=k;
	if(m>3&&n>5)
	    printf("-1");
	else
	   printf("%d %d",m, n);
	return 0; }