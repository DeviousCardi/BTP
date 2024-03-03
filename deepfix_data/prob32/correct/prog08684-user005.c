#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, a[n], i, j, flag;
	scanf("%d", &n);
	flag=0;
	for(i=0;i<n;i++) {
	    scanf("%d", &a[i]);
	    for(j=0;j<n;j++) {
	        if(a[i]%a[j]==0) {
	            flag=1; } }
	    if(flag==1)
	{printf("No");}
	else
	printf("Yes"); }
	return 0; }