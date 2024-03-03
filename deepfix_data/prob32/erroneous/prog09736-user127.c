#include <stdio.h>
#include <stdlib.h>
int main() {
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	    scanf("%d\n",&a[i]);
	if(a[0]<a[1])
	    printf("Yes");
	else if(a[n-1]<a[n-2])
	    printf("Yes");
	else {
	    for(i=1;i<(n-1)&& flag==0;i++) {
	        if(a[i]<a[i+1] && a[i]<a[i-1]) {
	            printf("Yes");
	            flag=1; } }
	    if(flag==0)
	        printf("No"); }
	return 0; }