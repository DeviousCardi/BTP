#include <stdio.h>
#include <stdlib.h>
int A(int m ,int n) {
    if(m==0)
    return n+1;
    if(m>0&&n==0)
    return A(m-1,1);
    if(m>0&&n>0)
    return A(m-1,A(m,n-1));
    return 0; }
int main() {
	int m=3,n=5,k;
	scanf("%d",&k);
	if(k==A(5,3))
	printf("%d %d",m,n);
	else
	printf("-1");
	return 0; }