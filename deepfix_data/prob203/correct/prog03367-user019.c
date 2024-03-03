#include <stdio.h>
int main() {
	int n,a[50],i,j,flag=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<n;i++) {
	    for(j=(i+1);j<=n;j++)
	    if(a[i]==a[j]&&flag==0) {
	        printf("YES");
	        flag=1; } }
	if(flag==0)
	printf("NO");
	return 0; }