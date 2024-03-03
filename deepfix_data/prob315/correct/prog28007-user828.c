#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,count=0,i,j,s[1000],m;
	int a[1000];
	scanf("%d", &n);
	for(i=0; i<n; i++) {
	    scanf("%d", &a[i]); }
	for(i=0; i<n; i++) {
	    count=0;
	    for(j=i+1; j<n; j++) {
	        if(a[i]>a[j]) {
	            count=count+1; } }
	    s[i]=count;
	    m=m+count; }
	printf("%d\n", count);
	for(i=0; i<n; i++) {
	    printf("%d", &s[i]); }
	return 0; }