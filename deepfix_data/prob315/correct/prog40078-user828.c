#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,count=0,i,j,s[1000],m=0;
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
	    printf("%d", count);
	    m=m+count; }
	printf("%d\n", m);
	return 0; }