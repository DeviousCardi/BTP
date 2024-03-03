#include <stdio.h>
#include <stdlib.h>
int ctln(int n) {
    if(n==0)
    return 1;
    else
    return 2*((2*n+1)/(n+2))*ctln(n-1); }
int main() {
    int k;
    scanf("%d",&k);
    printf("%d",ctln(k));
	return 0; }