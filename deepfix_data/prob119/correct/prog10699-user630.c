#include <stdio.h>
#include <stdlib.h>
int tower(int n) {
    if(n==1)
    return 1;
    else
    return 2*tower(n-1)+1; }
int main() {
	int t,k[50],i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	scanf("%d",&k[i]);
    for(i=0;i<t;i++)
    printf("%d",tower(k[i]));
	return 0; }