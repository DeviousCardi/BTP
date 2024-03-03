#include <stdio.h>
#include <stdlib.h>
int tower(int n)
{   int sum=0;
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    for(i=1;i<n;i++) {
        sum=sum+tower(i); }
    return sum+n; }
int main() {
	int t,k[50],i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	scanf("%d",&k[i]);
    for(i=0;i<t;i++)
    printf("%d\n",tower(k[i]));
	return 0; }