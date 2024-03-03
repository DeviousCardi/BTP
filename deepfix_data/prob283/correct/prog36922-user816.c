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
int check(int m,int n,int k) {
    if(m>3 || n>5)
    return 0;
    if(k==A(m,n))
    return 1;
    if(m<3)
    return A(m+1,n);
    if(m>=3) {
        m=0;
    return check(m,n+1,k); }
    return 0; }
int main() {
	int m=0,n=0,k;
	scanf("%d",&k);
	if(k==check(m,n,k))
	printf("%d %d",m,n);
	else
	printf("-1");
	return 0; }