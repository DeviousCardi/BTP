#include <stdio.h>
#include <stdlib.h>
int power(int n){
    if(n==0)
        return 1;
    return 2*power(n-1); }
int main() {
	int n,i;
	scanf("%d",&n);
	int t[n];
	for(i=0;i<n;i++)
	  scanf("%d",&t[i]);
	for(i=0;i<n;i++) {
	       int result=power(t[i])-1;
	       printf("%d\n",result); }
	return 0; }