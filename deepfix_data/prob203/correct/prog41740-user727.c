#include <stdio.h>
int main() {
	int a[50],i,n,j,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++) {
	    for(j=0;j<n&&j!=i;j++) {
	        if(a[j]==a[i]) {
	            printf("YES");
	            return 0; } } }
	printf("NO");
	return 0; }