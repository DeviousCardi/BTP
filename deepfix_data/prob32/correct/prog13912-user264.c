#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[20],i,n;
	int ch;
	       scanf("%d",&n);
	       scanf("%d",&ch);
	 for(i=0;i<n;i++)
	        arr[i]=ch;
	        scanf("%d",&ch);
	     for(i=0;i<1;i++) {
	          if(arr[i]<arr[i+1]) {
	              printf("YES"); } }
	     for(i=1;i<n-1;i++) {
	          if((arr[i]<arr[i-1])&&(arr[i]<arr[i+1])) {
	              printf("YES"); } }
	     for(i=n-1;i<n;i++) {
	          if(arr[i]<arr[i-1]) {
	               printf("YES"); }
	         else{
	                printf("No"); } }
	return 0; }