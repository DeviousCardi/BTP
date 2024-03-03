#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	int a[n];
	scanf("%d",&a[n]);
	int j,k;
	int sum=0;
	int b[n];
	for(k=0;k<n;k++){
	for(j=1;j<n;j++){
	    if(a[n]%j==0){
	        b[k]=j; } }
	sum=sum+b[k]; }
	if(sum==a[n]){
	    printf("Yes"); }
	else{
	    printf("No"); }
	return 0; }