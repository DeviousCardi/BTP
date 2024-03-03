#include <stdio.h>
#include <stdlib.h>
int main() {
    	int n,t,i,a[20],c[20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&c[i]); }
for(i=0;i<t;i++)
	{if(c[i]==0) {
	    if(a[c[i]>a[c[i]+1])
	     printf("Yes\n");
	    else
	    printf("No\n"); }
	else
	if(c[i]==(n-1)) {
	     if(a[c[i]>a[c[i]-1])
	     printf("Yes\n");
	    else
	    printf("No\n"); }
	else
	    if(a[c[i]]>a[c[i]-1]&&a[c[i]]>a[c[i]+1])
	    printf("Yes\n");
	    else
	    printf("No\n"); }
	return 0; }