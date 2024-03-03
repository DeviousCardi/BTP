#include <stdio.h>
#include <stdlib.h>
int fcatalan(int n)
   { if(n<=1)
    return 1;
    int resu=0;
    int i;
    for(i=0;i<n;i++) {
        resu=fcatalan(i)*fcatalan(n-i-1)
        return resu;
}    }
int main() {
	int k=0;
	for(k=0;k<=15;k++) {
	    scanf("%d",&t);
	    printf("%d",fcatalan(t)); }
	return 0; }