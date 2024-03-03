#include <stdio.h>
int main() {
	int i,k,l,c,n,array[50];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	scanf("%d",&array[i]);
	for(k=0;k<n-1;k++) {
	    for (l=k+1;l<n;l++) {
	        c=(array[k]==array[l]); } }
	if (c>0) {printf("NO");}
	else {printf("YES");}
	return 0; }