#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int i,k;
    if (n<=k)
    return 1;
    for(i=2;i<n;i++) {
        catalan(n)=catalan(n)+catalan(i)*catalan(n-i-1); }
    return catalan(n); }
int main() {
	int k,j,a=0,a[20];
	scanf("%d",&k);
	for(i=0;i<k;i++) {
	    scanf("%d\n",&a[i]); }
	 for(j=0;j<17;j++) {
	     if(k==catalan(j))
	      a=1; }
	 if(a==1) printf("yes");
	 else printf("no");
	return 0; }