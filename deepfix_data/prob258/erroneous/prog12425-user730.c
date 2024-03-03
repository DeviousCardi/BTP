#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	int i=0;
	while(i<n) {
	    getchar();
	    a[i]= getchar();
	    i=i+1; }
	for(i=0;i<n;i++) {
	  if(i-1)>0)&&(i+1)<n {
	         if((a[i]>a[i-1])&&(a[i]>a[i+1]) {
	             break; } }
	     else {
	         if((a[0]>a[1])||(a[n-2]>a[n-1])) {
	             break; } } }
	return 0; }