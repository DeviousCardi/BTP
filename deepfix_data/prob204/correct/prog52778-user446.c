#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,a[10000000];
	char c;
	for(i=0;i<10000000 ;i++){
	    c=getchar();
	    if (c=='\n')break;
	    else a[i]=c; }
    n=i;
    for(i=0;i<n;i--){
        if (a[n-(1+i)]!=a[i])break; }
    if (i==0)printf("yes");
    else printf("no");
	return 0; }