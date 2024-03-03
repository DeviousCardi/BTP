#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
    int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	int k;
	k=0;
	for(i=0;i<n;i++) {
	    if(a[i]<a[i+1]) {
	     k++; }
	 if(k!=0) {
	     printf("No"); }
	else {
	    printf("Yes"); } }
	return 0; }