#include <stdio.h>
int main() {
	int i,j,n,a[51],t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n-1;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[i]==a[j]) {
	        t=1;
	        break; } }
	    if(t==1)
	    break; }
	if(t==1)
	printf("YES");
	else
	printf("NO");
	return 0; }