#include <stdio.h>
int main() {
	int n,i,c,j,k;
	c=0;
	scanf("%d",&n);
	int str[n];
	for(i=0;i<n;i=i+1) {
	    scanf("%d",&str[i]); }
	for(j=0;j<n;j=j+1) {
	    for(k=j;k<n;k=k+1) {
	        if(str[j]==str[k]) {
	            c=c+1; } } }
	if(c==n){printf("NO");}
	else if(c>n){printf("YES");}
	return 0; }