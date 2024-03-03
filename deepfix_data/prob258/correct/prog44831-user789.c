#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a[20];
	int ch;
	scanf("%d",&n);
	ch=getchar();
	ch=getchar();
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	    ch=getchar();
	    ch=getchar(); }
	if(a[0]>a[1]||a[n]>a[n-1])
	printf("Yes");
	else
	for(i=1;i<n;i++) {
	    if(a[i]>a[i-1]&&a[i]>a[i+1])
	    break; }
	printf("Yes");
	return 0; }