#include <stdio.h>
#include <stdlib.h>
int fact(int n) {
    if (n==0)
    return 1;
    else if (n==1)
    return 1;
    return n*fact(n-1); }
int catalan(int n) {
    if (n==0) return 1; }
int main() {
	int t,num[50],i;
	scanf("%d",&t);
	for (i=0;i<t;i++)
	scanf("%d",&num[i]);
	return 0; }