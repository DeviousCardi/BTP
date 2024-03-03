#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	int s[20];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&s[i]); }
	for(i=0;i<n;i++){
	    if(s[0]<s[1]){
	        printf("Yes");
	        break; }
	    else if(s[i]<s[i-1] && s[i]<s[i+1] && i>0 && i<n-1){
	        printf("Yes");
	        break; }
	    else if(s[n-2]>s[n-1]){
	        printf("Yes"); } }
	return 0; }