#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
        int sum=0,i;
        if(n==0)    return 1;
        for(i=0;i<n;i++)
            sum+=catalan(n-1)*catalan(i);
        return sum; }
int main() {
    int k,t,f,i;
    scanf("%d",&t);
    while(t--) {
        printf("%d\n",catalan(t)); }
	return 0; }