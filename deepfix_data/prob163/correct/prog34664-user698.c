#include <stdio.h>
#include <stdlib.h>
int main() {
	char A[500];
	char B[500];
	char s[501];
	char dump[10];
	int n,m,i;
	scanf("%d%d\n",&n,&m);
	for(i=0;i<n;i++){
	    scanf("%c",&A[i]);}
 for(i=0;i<1;i++){scanf("%c",&dump[i]);}
		for(i=0;i<m;i++){
	    scanf("%c",&B[i]);}
	    for(i=0;i<=n;i++){
	        s[n-i]=A[n-i]+B[m-i]; }
	    for(i=0;i<=n;i++){
	        printf("%c",'s[i]'); }
	return 0; }