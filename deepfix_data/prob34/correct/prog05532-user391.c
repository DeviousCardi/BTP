#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[20];
	int b[20];
	int n,k,t;
	scanf("%d",&n);
	for(k=0;k<n;k++) {
	    scanf("%d",&a[k]); }
	scanf("%d",&t);
	for(k=0;k<t;k++) {
	    scanf("%d",&b[k]);
	    if(b[k]==0) {
	        if(a[0]>a[1])
	        printf("Yes\n");
	        else
	        printf("No\n"); }
	    else if(b[k]==n-1) {
	       if(a[n-1]>a[n-2])
	       printf("Yes\n");
	       else
	       printf("No\n"); }
	    if((a[b[k]]>a[b[k]-1])&&(a[b[k]]>a[b[k]+1]))
	    printf("Yes\n");
	    else
	    printf("No\n"); }
	return 0; }