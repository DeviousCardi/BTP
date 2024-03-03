#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d\n",&n);
	int a[n];
	int i;
	int j;
	int k;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int s;
	scanf("%d",&s);
	for(j=0;j<n;j++) {
	    for(k=j+1;k<n;k++) {
	        if(a[j]+a[k]==s)
	        printf("(%d,%d)\n",a[j],a[k]); } }
	return 0; }