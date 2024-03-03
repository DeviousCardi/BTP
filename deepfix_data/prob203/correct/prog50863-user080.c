#include <stdio.h>
int main() {
	int n,i,c,j,k;
	int str[n];
	scanf("%d",&n);
	for(i=0;i<n;i=i+1) {
	    scanf("%d",&str[i]); }
	for(j=0;j<n;j=j+1) {
	    for(k=0;k<n;k=k+1) {
	        if(str[j]==str[k]) {
	            break; } } }
	if(c==n){printf("NO");}
	else{printf("YES");}
	return 0; }