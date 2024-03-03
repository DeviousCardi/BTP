#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[20],i,n;
	       scanf("%d",&n);
	 for(i=0;i<n;i++)
	        scanf("%d",&arr[i]);
	 if(n!=1) {
	        for(i=0;i<n;i++) {
              if(i==0) {
                i++;continue; }
               if((i>0)&&(i<n-1)) {
	                  if((arr[i]<arr[i-1])&&(arr[i]<arr[i+1])) {
	                       printf("Yes");break; } }
               if(i==n-1) {
	                if(arr[i]<arr[i-1]) {
	                   printf("Yes");break; } }
	         else {
	               printf("No");break; } } }
	return 0; }