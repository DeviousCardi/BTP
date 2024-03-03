#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[20],i,n,j;
	       scanf("%d",&n);
	 for(i=0;i<n;i++)
	        scanf("%d",&arr[i]);
	 for(j=0;j<n;j++) {
           if(j==0) {
                if(arr[i]<arr[i+1]) {
                        printf("Yes"); } }
           if((j>0)&&(j<n-1)) {
	            if((arr[i]<arr[i-1])&&(arr[i]<arr[i+1])) {
	                       printf("Yes"); } }
          if(j==n-1) {
	           if(arr[i]<arr[i+1]) {
	                   printf("Y"); } }
	    else{
	        printf("No"); } }
	return 0; }