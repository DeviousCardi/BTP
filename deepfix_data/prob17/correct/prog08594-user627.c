#include <stdio.h>
int main() {
	int n1,n2,a1[20],a2[20],i,j,c=0;
	scanf("%d",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d",&a1[i]); }
	scanf("%d",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d",&a2[i]); }
	if(n1>n2) {
	    for(i=0;i<=n1-n2;i++) {
	        if(i==n1-n2) {
	            printf("NO");
	            break; }
	        for(j=i;j<i+n2;j++) {
	            if(a1[j]==a2[j-i]) {
	                c=c+1; }
	            else {
	                c=0; } }
	        if(c==n2) {
	            printf("YES");
	            break; } } }
	return 0; }