#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d",&n);
	if(n==1)
	printf("Yes");
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	i=1;
	while(i<n)
	{ if(a[0]>a[1]||a[n-1]>a[n-2]) {
	    printf("Yes");break; }
	    if((a[i]>a[i-1])&&(a[i]>a[i+1])) {
	        printf("Yes");break; }
	    i++;
	    if(i==n) {
	        printf("No"); } }
	return 0; }