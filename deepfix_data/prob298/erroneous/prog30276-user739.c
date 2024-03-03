#include <stdio.h>
#include <stdlib.h>
int catlan(int n) {
    if((n==0)||(n==1))
    k=1;
    else
    k=2*catlan(n-1)+2*catlan(n-2)-1 }
int main() {
    int i,t;
	scanf("%d",&t);
	int str[t];
	for(i=0;i<t;i++) {
	    scanf("%d",&str[i]); }
    k=catlan(1);
    printf("%d",k);
	return 0; }