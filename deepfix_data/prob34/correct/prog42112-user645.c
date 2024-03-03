#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	int j,k,t;
	scanf("%d\n",&n);
	int num[i];
	for(i=0;i<n;i++) {
	    scanf("%d\n",&num[i]); }
	if(n==1) {
	    printf("Yes"); }
	else
	scanf("%d\n",&t);
	for(j=0;j<t;j++) {
	   	 scanf("%d\n",&k);
	    if(k==0) {
	        if(num[0]>num[1])
	        printf("Yes\n");
	        else
	        printf("No\n"); }
	       if(k==n-1) {
	      if(num[n-1]>num[n-2])
	        printf("Yes\n");
	        else
	        printf("No\n"); }
	   else if(k>0&&k<n-1) {
	    if(num[k]>num[k-1]&&num[k]>num[k+1])
	        printf("Yes\n");
	       else
	        printf("No\n"); } }
	return 0; }