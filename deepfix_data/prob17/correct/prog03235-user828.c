#include <stdio.h>
int main() {
	int n,m,i,j,p=0,count=1;
	int a[20], b[20];
	scanf("%d", &n);
	for(i=0; i<n; i++) {
	    scanf("%d ", &a[i]); }
	scanf("%d", &m);
	for(i=0; i<m; i++) {
	    scanf("%d ", &b[i]); }
	for(i=0; i<n; i++) {
	    if(b[0]==a[i]) {
	        p=i;
	        break; } }
	for(i=1; i<m; i++) {
	       if(b[i]==a[p+1]) {
	           p=p+1;
	           count=count+1;
	           if(count==m) {
	               break; } }
	       else
	         break; }
	if(count==m) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }