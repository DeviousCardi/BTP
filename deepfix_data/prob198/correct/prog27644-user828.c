#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m, i, j, min;
	int a[20], b[20];
	scanf("%d", &n);
	for(i=0; i<n; i++) {
	    scanf("%d", &a[i]); }
	scanf("%d\n", &m);
	for(i=0; i<m; i++) {
	    scanf("%d", &b[i]); }
	min=a[0];
	for(i=0; i<n; i++) {
	    if(a[i]<min)
	      min=a[i]; }
	for(i=0; i<m; i++) {
	    if(min==b[i]) {
	        printf("NO");
	        break; } }
	if(i==m) {
	    printf("%d", min); }
	return 0; }