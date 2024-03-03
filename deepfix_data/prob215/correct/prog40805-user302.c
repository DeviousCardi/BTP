#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	int c[n];
	c[0]=0;
	int a[n];
	int i;
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	    c[i]=c[i]*10+a[i]; }
	int j,k;
	int sum=0;
	int b[n];
	for(k=0;k<n;k++){
	for(j=1;j<n;j++){
	    if(a[n]%j==0){
	        b[k]=j; } }
	sum=sum+b[k]; }
	if(sum==c[i]){
	    printf("Yes"); }
	else{
	    printf("No"); }
	return 0; }