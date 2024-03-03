#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, n, t, c;
	scanf("%d\n",&n);
	int a[i];
	for(i=0;i<n;i++) {
	    scanf("%d\n";a[i]); }
	if(c==0) {
	    if(a[c]<a[c+1]) {
	        printf("Yes"); }
	    else
	        printf("No"); }
	else if(c==t-1) {
	    if(a[c]<a[c-1])
	    printf("Yes");
	    else
	    printf("No"); }
	else {
	    if(a[c]<a[c-1]&&a[c]<a[c+1]) {
	        printf("Yes"); }
	    else
	    printf("No"); }
	return 0; }