#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,t;
	int ar[20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&ar[i]); }
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&j);
	    if(j==0) {
	        if (ar[1]>ar[0])
	    printf("Yes\n");
	    else
	    printf("No\n");
	    }else
	    if(j==n-1) {
	       if(ar[n-2]>ar[n-1])
	    printf("Yes\n");
	    else
	    printf("No\n");
	    }else
	   { if(ar[j]<ar[j+1]&&ar[j]<ar[j-1])
	    printf("Yes\n");
	    else
	    printf("No\n");
	}}
	return 0; }