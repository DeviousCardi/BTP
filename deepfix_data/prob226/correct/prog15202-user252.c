#include <stdio.h>
int main() {
	int d,n,i,a[30],cnt=0;
	scanf("%d %d\n",&d,&n);
	for(i=0;i<d;i++) {
	    scanf("%d ",&a[i]);
	    if(i==d-1) scanf("\n");
	    cnt=cnt+a[i]; }
	printf("%d",cnt);
	for(i=d;i<n;i++) {
	    a[i]=cnt;
	    cnt=cnt+a[i]-a[i-d]; }
	printf("%d\n",a[n]);
	return 0; }