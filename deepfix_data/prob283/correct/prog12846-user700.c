#include <stdio.h>
#include <stdlib.h>
int A(int m,int n) {
    if(m==0)
    return n+1;
    if((m>0)&&(n=0))
    return A(m-1,1);
    return A(m-1,A(m,n-1)); }
int main() {
	int k,m,n;
	scanf("%d", &k);
	printf("%d %d", &m,&n);
	return -1; }