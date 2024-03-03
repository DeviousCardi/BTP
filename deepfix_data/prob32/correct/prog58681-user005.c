#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, a[n], i, flag;
	scanf("%d", &n);
	if(n<=20)
	{for(i=0;i<n;i++) {
	    flag=0;
	    scanf("%d", &a[i]);
	    if((a[i]<a[i-1]) && (a[i]<a[i+1])) {
	        flag=1; }
	 if(flag==1) {
	    printf("Yes"); }
	else printf("No"); } }
	return 0; }