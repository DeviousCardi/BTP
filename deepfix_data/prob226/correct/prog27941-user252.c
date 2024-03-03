#include <stdio.h>
int main() {
	int d,n,i,a[30],cnt=0;
	scanf("%d %d\n",&d,&n);
	for(i=0;i<d;i++) {
	    scanf("%d ",&a[i]);
	    cnt=cnt+a[i]; }
	for(i=d;i<n-1;i++) {
	    a[i]=cnt;
	    cnt=cnt+a[i]-a[i-d]; }
	printf("%d\n",a[n]);
	return 0; }