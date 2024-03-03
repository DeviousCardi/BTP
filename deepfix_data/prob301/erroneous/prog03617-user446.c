#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d",&n);
	int a[n],s[n];
	for(i=0;i<n;i++){
	    scanf("%d",& a[i]); }
	for(i=0;i<n;i++){
	    count=1;
	    while(a[i]==a[i+1] && i<n-1){
	        count++; }
	    s[i]=count; }
	for(i=0;i<n;i++){
	    if(max<s[i])max=s[i]; }
	return 0; }