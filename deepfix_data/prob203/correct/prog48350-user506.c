#include <stdio.h>
int main() {
	int n,i,k,f=0;
	scanf("%d", &n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d ",&a[i]);
	for(i=0;i<n;i++) {
	    for(k=0;k<n && k!=i;k++) {
	        if(a[i]==a[k])
	        f=f+1; }
	    if(f>0)
	    break; }
	if(f>0)
	printf("YES");
	if(f==0)
	printf("NO");
	return 0; }