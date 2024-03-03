#include <stdio.h>
#include <stdlib.h>
int catalan(int m,int n) {
    int i,j,a[15][15];
    if(m==0 || n==0) return 1;
    return (catalan(m-1,n)+catalan(m-1,n-1)); }
int main() {
	int t,i,a;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&a);
	    printf("%d\n",catalan(a,a)); }
	return 0; }