#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,s,n;
    s=0;
	scanf("%d",&n);\\j\\
	for(i=1;i<=n/2;i=i+1) {
	    if(n%i==0) {
	        s=s+i; } }
	 if(s==n)
	 printf("YES");
	 else
	 printf("NO");
	return 0; }