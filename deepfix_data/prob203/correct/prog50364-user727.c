#include <stdio.h>
int main() {
	int a[50],i,n,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i>=0;i++) {
	    for(j=0;j<n;j++) {
	        if(a[j]==i)
	        break; }
	    if(a[j]==i||j==n)
	    break; }
	if(a[j]==i)
	printf("YES");
	else
	printf("NO");
	return 0; }