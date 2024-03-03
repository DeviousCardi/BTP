#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m,j,z,a[20];
	scanf("%d\n",&n);
	for (i=0;i<n;i=i+1) {
	    scanf("%d\n",&a[i]); }
	    scanf("%d\n",&m);
	for (j=0;j<m;j=j+1) {
	       if(n==1)
	        printf("Yes\n");
	       scanf("%d\n",&z);
	           if (z==0) {
	               if(a[z]>a[z+1])
	                printf("Yes\n");
                   else
                    printf("No\n"); }
	           else if(z==n-1) {
	               if(a[z]>a[z-1])
	                printf("Yes\n");
                   else
                    printf("No\n"); }
	           else {
	               if(a[z]>a[z-1] && a[z]>a[z+1])
	                printf("Yes\n");
	               else
	                printf("No\n"); } }
	return 0; }