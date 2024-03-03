#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[20],i,n,k;
	       scanf("%d",&n);
	 for(i=0;i<n;i++)
	        scanf("%d",&arr[i]);
	 if(n!=1) {
	        for(i=0;i<n;i++)
	         { k=i;
              if(k==0) {
                if(arr[i]<arr[i+1]) {
                        printf("Yes");break; } }
             else if((k>0)&&(k<n-1)) {
	                  if((arr[i]<arr[i-1])&&(arr[i]<arr[i+1])) {
	                       printf("Yes"); } }
              else if(k==n-1) {
	                if(arr[i]<arr[i-1]) {
	                   printf("Yes"); } }
	         else{
	               printf("No"); } } }
	return 0; }