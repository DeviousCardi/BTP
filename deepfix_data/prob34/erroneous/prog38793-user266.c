#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[20],i,n,t,c;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&arr[i]); }
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d",&c);
	    if(n==1) {
	        printf("Yes"); }
	   else if(c==0) {
	        if(arr[c]>arr[c+1])
	            printf("Yes\n");
	        else
	    else if(c==n) {
	        if(arr[c]>arr[c-1])
	            printf("Yes
	            printf("No\n");
	    }\n");
	        else
	            printf("No\n"); }
	    else if(arr[c]>arr[c-1]&&arr[c]>arr[c+1])
	        printf("Yes\n");
	    else
	        printf("No\n"); }
	return 0; }