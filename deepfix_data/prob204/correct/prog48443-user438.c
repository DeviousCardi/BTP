#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	int count=0; {
	    for(i=0;i<100;i++) {
	    if(a[i]==a[n-i-1]) {
	        count=count+1; } }
	if(count==n-1/2){
	    printf("Yes");
	}}
	return 0; }