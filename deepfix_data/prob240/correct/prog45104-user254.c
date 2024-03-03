#include <stdio.h>
#include <stdlib.h>
long int smlcat=0;
int flag=0;
long int catalan(int n, int key);
long int catalan(int n, int key) {
    if(n==0) return 1;
    long int ans=0;
    ans=catalan(n-1, key);
    ans=2*(2*n - 1)*(ans)/(n+1); if(ans>(key-1) && flag==0){ smlcat=catalan(n-1, key); flag=1;}
    return ans; }
int main() {
    long int ans=0;
    int t=0, n=0, i=0;
    scanf("%d", &t);
    for(i=0;i<t;i++) {
        scanf("%d", &n);
        ans=catalan(25, n);
        printf("%ld\n", smlcat); flag=0; }
	return 0; }