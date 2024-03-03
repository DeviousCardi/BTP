#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(int i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(int i=0;i<n;i++) {
	    int count=0;
	    for(int j=n-1;j>i;j--) {
	        if(a[i]>a[j]) {
	            count=count+1; } }
	    b[i]=count; }
	int c=0;
	for(int i=0;i<n;i++) {
	    c=c+b[i]; }
	printf("%d\n",c);
	for(int i=0;i<n;i++) {
	    printf("%d "a[i]); }
	return 0; }