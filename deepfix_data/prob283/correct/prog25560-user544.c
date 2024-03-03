#include <stdio.h>
#include <stdlib.h>
 int A(int m,int n){
     if(m==0)
     return n+1;
     if(m>0||n==0)
     return A(m-1,1);
     if(m>0||n>0)
     return A(m-1,A(m,n-1)); }
int main() {
	int k,m,n,y,a,b;
	scanf("%d",&k);
	y=A(m,n);
	k=y;
	a=m;
	b=n;
	if(a>3||b>5)
	    printf("-1");
	else
	   printf("%d %d",a, b);
	return 0; }