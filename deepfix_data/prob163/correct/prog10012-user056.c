#include <stdio.h>
#include <stdlib.h>
int main() {
	int s,t;
	scanf("%d",&s);
	scanf("%d",&t);
	int a[s],b[t];
	int i,j,k;
	for(i=0;i<s;i++) {
	    scanf("%1d",&a[i]); }
	for(i=0;i<t;i++) {
	    scanf("%1d",&b[i]); }
	int d=((s>t)?:(s+1),(t+1));
     char c[d];
      k=t;
      j=s;
	for(i=d;i>=0;i--) {
	    c[i]=a[j]+b[k];
	    j--;
	    k--; }
		for(i=0;i<d;i++) {
	    printf("%d",c[i]); }
	return 0; }