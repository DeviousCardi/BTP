#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,a[10000];
	char c;
	for(i=0;i<100 ;i++){
	    scanf("%c",&c);
	    if (c<='9' && c>='0')a[i]=c;
	    else break; }
    n=i;
    for(i=0;i<n;i++){
        if (a[n-(1+i)]!=a[i])break; }
    if (i==n)printf("yes");
    else printf("no");
	return 0; }