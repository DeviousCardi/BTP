#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	if(n==1)
	j=j+1;
	else
	for(i=0;i<n;i++) {
	    if(i==0) {
	        if(a[i]>a[i+1]) {
	            j=j+1;
	            break; } }
	    else if (i==n-1) {
	      {  if(a[n-1]>a[n-2])
	        j=j+1;
	        break; } }
	 else {
	 if (a[i]>a[i-1]&a[i]>a[i+1]) {
	    j=j+1;
	    break; } } }
	if(j==1) {
	    printf("Yes"); }
	else {
	    printf("No"); }
	return 0; }