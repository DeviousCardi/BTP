#include <stdio.h>
int main() {
	int n,m,i,j,p=0,count=0;
	int a[20], b[20];
	scanf("%d", &n);
	for(i=0; i<n; i++) {
	    scanf("%d ", &a[i]); }
	scanf("%d", &m);
	for(i=0; i<m; i++) {
	    scanf("%d ", &b[i]); }
	for(i=0; i<m; i++) {
	    for(j=0; j<n; j++) {
	       if(b[i]==a[j+p]) {
	           p=j;
	           count=count+1;
	           break; } } }
	if(count==m) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }