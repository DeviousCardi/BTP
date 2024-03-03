#include <stdio.h>
int main() {
	int a[21],b[21],i,j,t=0,n,m;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&m);
	for(j=0;j<m;j++) {
	    scanf("%d",&b[j]); }
	for(j=0;j<m;j++) {
	    for(i=0;i<n;i++) {
	        if(b[j]==a[i]) {
	            printf("\n**%d",b[j]);
	            break; } } }
	return 0; }