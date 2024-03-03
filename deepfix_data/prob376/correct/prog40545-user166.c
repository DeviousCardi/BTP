#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i,sum=0;
    if(n==0) {
        return 1; }
    else if(n>0) {
        for(i=0;i<n;i++) {
            sum=sum + catalan(i)*catalan(n-1-i); } }
    return sum; }
int main() {
    int t,k,i;
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&k);
        int C= catalan(k);
        printf("%d\n",C+1); }
	return 0; }