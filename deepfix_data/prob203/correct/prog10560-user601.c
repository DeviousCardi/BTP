#include <stdio.h>
int main() {
	int a[50];
	int n,i,j,l=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	   scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[i]==a[j]) {
	            l++; } } }
	if(l>0) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }