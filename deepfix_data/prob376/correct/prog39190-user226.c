#include <stdio.h>
#include <stdlib.h>
int main() {
	int t=0,a[10000],i=0;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&a[i]);
	    printf("%d\n",cat(a[i])); }
	return 0; }
int cat(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else
    return (2*(2*n-1)*cat(n-1))/(n+1); }