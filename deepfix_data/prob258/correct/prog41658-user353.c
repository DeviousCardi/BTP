#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,count;
	scanf("%d",&n);
	int a[20];
	for(i=0;i<n;i++) {
     scanf("%d\n",&a[i]);
	  if(i=0) {
	      if(a[1]>a[0]) {
          printf("Yes");
           break; } }
      else if(i>0&&i<n-1) {
	       if((a[i]>a[i-1])&&(a[i]>a[i+1])) {
	         printf("Yes");
	          break; } }
	  else if(i=n-1) {
	        if(a[n-1]>a[n-2]) {
	         printf("Yes");
	          break; } }
	    count=count+1; }
      if(count==n) {
          printf("No"); }
                                                                                        	return 0; }