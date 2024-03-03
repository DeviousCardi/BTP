#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j;
	int s[20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&s[i]); }
	for(i=1;i<n-1;i++){
	     if(s[i]<s[i-1] && s[i]<s[i+1]){
	        printf("Yes");
	        break; } }
	return 0; }