#include <stdio.h>
int main() {
	int a[50],i,n,j,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i>=0;i++) {
	    c=0;
	    for(j=0;j<n;j++) {
	        if(a[j]==i)
	        c++; }
	    if(c>1||j==n)
	    break; }
	if(c>1)
	printf("YES");
	else
	printf("NO");
	return 0; }