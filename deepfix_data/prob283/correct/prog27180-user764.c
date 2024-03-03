#include <stdio.h>
#include <stdlib.h>
int a(int m,int n);
int main() {
	int k,m,n;
	scanf("%d",&k);
	k=a(m,n);
	printf("%d %d",m,n);
	return 0; }
int a(int m,int n){
    if(m==0)
    return n+1;
    else if((m>0)&&(n==0))
    return a(m-1,n);
    else if((m>=0)&&(n>0))
    return a(m-1,a(m,n-1)); }