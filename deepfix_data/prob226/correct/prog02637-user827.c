#include <stdio.h>
int main() {
	int n,d,k,i,j,s=0;
	scanf("%d %d",&n,&d);
	int a[n+2];
	for(i=0;i<d;i++) {
	    scanf("%d",&a[i]);
	    s=s+a[i];
	    printf("%d ",s); }
	if(n<d) {
	    printf("%d %d",a[n],s); }
	else if(n>=d) {
	    printf("%d",s); }
	return 0; }