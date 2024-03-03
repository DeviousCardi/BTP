#include <stdio.h>
#include <stdlib.h>
int a(int m,int n);
int main() {
	int k,m,n;
	scanf("%d",&k);
	for(n=0;n<6;n=n+1){
	    for(m=0;m<4;m=m+1)
	    { if (a(m,n)==k)
	     printf("%d %d",m,n);
	     else continue; } }
	return 0; }
int a(int m,int n){
  if(m==0)
    return n+1;
    else if((m>0)&&(n==0))
    return a(m-1,n);
    else
    return a(m-1,a(m,n-1))  ; }