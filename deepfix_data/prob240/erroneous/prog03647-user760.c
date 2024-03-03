#include <stdio.h>
#include <stdlib.h>
int catalan(int k){
    int sum=0;i
    if(k==0)
      return 1;
    for(i=0;i<=k;i++){
        sum= sum+ catalan(i)*catalan(n-i); }
    return sum; }
int main() {
	int t,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    printf("%d\n",catalan(k)); }
	return 0; }