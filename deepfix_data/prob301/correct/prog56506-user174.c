#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[10000];
	int n,max,f=1,num;
	scanf("%d\n",&n);
	int i;
	for(i=0;i<n;i++) {
	    scanf("%d ",&a[i]); }
	for (i=0;i<n-1;i++) {
	    if(a[i]==a[i+1]) {
	        f++;
	        max=f;
	        num=a[i]; }
	    else
	    {f=1; } }
	printf("%d",num);
	return 0; }