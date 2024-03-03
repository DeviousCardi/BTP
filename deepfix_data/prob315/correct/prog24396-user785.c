#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, n, c = 0;
	scanf("%d",&n);
	int a[n];
	for(i = 0; i < n; i++)
	    scanf("%d",&a[i]);
	int b[n];
	for(i = 0; i < n; i++)
	   b[i] = 0;
	for(i = 0; i < n; i++) {
	    for(j = i + 1; j < n; j++) {
	        if(a[i]>a[j]) {
	            c++;
	            b[i]++; } } }
	printf("%d",c);
	for(i = 0; i < n; i++) {
	    printf("%d",b[i]);
	    if(i != n - 1){
	       printf(" "); } }
	return 0; }