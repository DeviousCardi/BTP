#include <stdio.h>
int main() {
	   int n,i,J;
	   int a[50];
	   scanf("%d",&n);
	   for(i=0;i<n;i++) {
	       scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++) {
	       if(a[i]==a[j]) {
	           printf("YES");
	          return 0; }
	       else{continue;} } }
	if(i==n){prinf("NO");}
	return 0; }