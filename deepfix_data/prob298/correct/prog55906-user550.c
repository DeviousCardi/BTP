#include <stdio.h>
#include <stdlib.h>
int choose(int n,int k) {
    if(n<k) return 0;
    if(n==1||k==0) return 1;
    else return choose(n-1,k)+choose(n-1,k-1); }
int catalan(int n) {
    if(n==0) return 1;
    else return choose(2*n,n)/(n+1); }
int main() {
	printf("%d",choose(2,2));
	return 0; }