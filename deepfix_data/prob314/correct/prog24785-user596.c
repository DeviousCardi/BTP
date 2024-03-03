#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j,m,test,a[20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	    scanf("%d\n",&m);
	 for(j=0;j<m;j++) {
	     scanf("%d\n",&test);
	     if (test==0) {
	          if(a[test]<a[test+1])
	           printf("Yes\n");
	          else
	           printf("No\n"); }
	       else if(test==n-1) {
	          if(a[test]<a[test-1])
	           printf("Yes\n");
	          else
	           printf("No\n"); }
	      else {
	          if(a[test]<a[test-1]&&a[test]<a[test+1])
	           printf("Yes\n");
	          else
	           printf("No\n"); } }
	 {if(test==1)
	         printf("Yes\n");
	         else
	         printf("No\n"); }
	      return 0; }