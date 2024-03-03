#include <stdio.h>
#include <stdlib.h>
int cat(int);
int main() {
    int i,n,t,k;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        printf("%d\n",cat(i)); }
	return 0; }
int cat(int n) {
    if(n==0)
     return 1;
    return ((4*n-2)*cat(n-1))/(n+1); }