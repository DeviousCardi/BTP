#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,count=0,arr[10];
	if(arr[0]=1)
	n=9;
	if(arr[0]=3)
	n=4;
	for(i=0;i<n;i++) {
	    scanf("%d",&arr[i]); }
	if(n%2==0) {
	   for(i=0;i<n/2+1;i++) {
	       if(arr[i]==arr[n-1-i])
	       count=count+1; } }
	else {
	    for(i=0;i<(n+1)/2;i++) {
	        if(arr[i]==arr[n-1-i])
	        count=count+1; } }
	if(n%2==0) {
	    if(count==n/2)
	    printf("YES");
	    else
	    printf("NO");
	    return 0; }
	else {
	    if(count=(n+1)/2)
	    printf("YES");
	    else
	    printf("NO"); }
	return 0; }