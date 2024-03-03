#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	int b[20];
	scanf("%d\n",&n);
	for(i=0;i<n+1;i++){
	    scanf("%d\n",&b[i]); }
	if((b[i]<=b[i-1])&&(b[i]<=b[i+1])){
	    printf("Yes\n"); }
	else{
	    printf("No\n"); }
	return 0; }