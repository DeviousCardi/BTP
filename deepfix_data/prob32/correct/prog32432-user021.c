#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j;
	int s[20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d\n",&s[i]); }
	for(i=1;i<n-1;i++){
	     if(s[i]<s[i-1] && s[i]<s[i+1]){
	        j=1;
	        break; }
	    else{
	        j=0; } }
	if(j==1){
	    printf("Yes"); }
	else{
	    printf("No"); }
	return 0; }