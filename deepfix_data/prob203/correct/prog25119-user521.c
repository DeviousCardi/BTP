#include <stdio.h>
int main() {
	int n,i,j,flag=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[i]==a[j]) {
	            flag=1;
	            printf("YES");
	            break; } } }
	if(flag==0) {
	    printf("NO"); }
	return 0; }