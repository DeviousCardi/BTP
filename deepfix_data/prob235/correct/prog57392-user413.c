#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    for(j=1;j<=n;j++) {
	        if (i<=n/2+1) {
	        if(j<=n/2+1-i) {
	             printf(" "); }
	       else
	       {if (j>9&&j<n/2+1+i) {
	           printf("%d",a=j%10); }
	       else if(j<n/2+1+i){
	           printf("%d",j); } }
	       } else if (i>n/2+1) {
	            if(j<=i-n/2-1||j>n-i+n/2+1) {
	                printf(" "); }
	            else
	            {if (j>9&&j<=n-i+n/2+1) {
	           printf("%d",a=j%10); }
	       else if(j<=n-i+n/2+1){
	                printf("%d",j); } }
	    }}
	    printf("\n"); }
	return 0; }