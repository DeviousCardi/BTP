#include <stdio.h>
#include <stdlib.h>
 int A(int m,int n){
     if(m==0)
     return n+1;
     if(m>0&&n==0)
     return A(m-1,1);
     if(m>0&&n>0)
     return A(m-1,A(m,n-1)); }
 int mini(int m,int n){
     if(m>n)
     return n;
     else
     return m; }
int main() {
	int k,m,n;
	scanf("%d",&k);
	k=A(m,n);
	if(m>3&&n>5)
	    printf("-1");
	else
	   printf("%d %d",m, n);
	return 0; }