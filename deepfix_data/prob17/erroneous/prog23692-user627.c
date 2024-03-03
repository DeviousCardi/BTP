#include <stdio.h>
int main() {
	int n1,n2,a1[20],a2[20],i;
	scanf("%d",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d",&a[i]); }
	if(n1>n2) {
	    for(i=0;i<=n1-n2;i++) {
	        if(i=n1-n2) {
	            printf("NO");
	            break; }
	        for(j=i;j<i+n2;j++) {
	            if(a[j]!=b[j-i]) {
	                continue; }
	            printf("YES"); } } }
	return 0; }