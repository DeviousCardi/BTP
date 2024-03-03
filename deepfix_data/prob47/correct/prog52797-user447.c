#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,sum=1;
    if(n==0 || n==1) return 1;
    for(i=1;i<=n;i++) {
        sum=sum+((catalan(i-1))*(2*i-1)*2)/(i+1); }
    return sum; }
int main() {
	int t,i,a;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&a);
	    printf("%d\n",catalan(a)); }
	return 0; }