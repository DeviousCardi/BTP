#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m;
	char a[500];
	char b[500];
	scanf("%d\n",&n);
	scanf("%d\n",&m);
	for(i=0;i<n;i++){
	    scanf("%c",&a[i]);}
	for(i=0;i<m;i++){
	    scanf("%c",&b[i]);}
	int k;
    	if(n>=m) k=m;
	    else     k=n;
	int l;
	    if(n<=m) l=m;
	    else     l=n;
	char d[l];
	    if(n>m)  d[i]=a[i];
	    else     d[i]=b[i];
	char c[501];
	for(i=0;i<(l-k);i++){
	c[i]=d[i];
	printf("%c",c[i]);}
	for(i=(l-k);i<l;i++){
	c[i]=a[i]+b[i];
	printf("%c",c[i]);}
	return 0; }