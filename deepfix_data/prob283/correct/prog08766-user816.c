#include <stdio.h>
#include <stdlib.h>
int A();
int main() {
	int m,n,k;
	scanf("%d",&k);
	if(k==A(3,4))
	printf("%d %d",A());
	return 0; }
int A(int m ,int n) {
    if(m<0||n<0)
    return -1;
    if(m==0)
    return n+1;
    if(m>0&&n==0)
    return A(m-1,1);
    if(m>0&&n>0)
    return A(m-1,A(m,n-1)); }