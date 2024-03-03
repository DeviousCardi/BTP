#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	int b[20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&b[i]); }
	if((b[i-2]<=b[i-3])&&(b[i-2]<=b[i-1])){
	    printf("Yes\n"); }
	else{
	    printf("No\n"); }
	return 0; }