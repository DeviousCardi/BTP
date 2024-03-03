#include <stdio.h>
#include <stdlib.h>
int main() {
	int l[20];
	int n,i,j,k;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&l[i]); }
	scanf("%d",&j);
	printf("array\n");
	for(i=0;i<n;i++) {
	    printf("%d\n",l[i]); }
	printf("done\n");
	for(k=0;k<j;k++) {
	    scanf("%d\n",&k);
	    if (k==0) {
	        if(l[k]>l[k+1])
	            printf("Yes\n");
	        else
	            printf("No\n"); }
	    else if(k==n-1) {
	        if(l[k]>l[k-1])
	            printf("Yes\n");
	        else
	            printf("No\n"); }
	    else{
	        if(l[k]>l[k-1]&&l[k]>l[k+1])
	          printf("Yes\n");
	        else
	            printf("No\n"); } }
	return 0; }