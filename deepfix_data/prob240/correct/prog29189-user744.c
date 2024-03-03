#include <stdio.h>
#include <stdlib.h>
 int catalan(int n) {
     if(n==0)
     return 1;
     else
     return (catalan(n-1)*(4*n+2))/(n+2); }
int main() {
    int i,j=0,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&k);
    while(catalan(j)<k) {
        j++; }
        printf("%d\n",catalan(j-1));
    j=0; }
	return 0; }