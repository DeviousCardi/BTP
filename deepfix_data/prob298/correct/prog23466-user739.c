#include <stdio.h>
#include <stdlib.h>
int catlan(int n) {
    int k;
    if((n==0)||(n==1))
    k=1;
    else
    k=2*catlan(n-1)+2*catlan(n-2)-1;
    return k; }
int main() {
    int i,t,k;
	scanf("%d",&t);
	int str[t];
	for(i=0;i<t;i++) {
	    scanf("%d",&str[i]); }
    k=catlan(2);
    printf("%d",k);
	return 0; }