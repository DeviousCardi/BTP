#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	int a[20];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    scanf("%d",&a[i]); }
	if(a[i]==a[n-i+1]){
	    printf("Yes"); }
	else{
	    printf("No"); }
	return 0; }