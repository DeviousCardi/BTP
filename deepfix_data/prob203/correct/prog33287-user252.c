#include <stdio.h>
int main() {
	int n,a[50],i,j,flag;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d ",&a[i]); }
	for(i=0;i<n;i++) {
	    for(j=0;j<n;j++) {
	        flag=(a[i]==a[j])?1:0;
	        break; } }
	if(flag==1) printf("YES");
	else printf("NO");
	return 0; }