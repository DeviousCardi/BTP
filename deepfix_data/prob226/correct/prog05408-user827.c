#include <stdio.h>
int main() {
	int n,d,k,i,j,s=0;
	scanf("%d %d",&n,&d);
	int a[n+2];
	for(i=0;i<d;i++) {
	    scanf("%d",&a[i]); }
	if(n<d) {
	    printf("%d",a[n]); }
	else {
	    k=n-d-1;
	    for(i=0;i<d;i++) {
	        s=s+a[i]; }
	    s=s*k;
	    printf("%d",s); }
	return 0; }