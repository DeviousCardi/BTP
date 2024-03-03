#include <stdio.h>
int main() {
	int n,a[n],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[j]==a[i])
	        printf("YES");
	        else
	        printf("NO"); } }
	return 0; }