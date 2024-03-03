#include <stdio.h>
#include <stdlib.h>
long int catalan(int n);
long int catalan(int n) {
    if(n==0) return 1;
    long int ans=0;
    ans=catalan(n-1);
    ans=2*(2*n - 1)*(ans)/(n+1); printf("ans is %d \n", ans);
    return ans; }
int main() {
    long int ans=0;
    int t=0, n=0, i=0;
    scanf("%d", &t);
    for(i=0;i<t;i++) {
        scanf("%d", &n);
        ans=catalan(n-1);
        printf("%ld\n", ans); }
	return 0; }