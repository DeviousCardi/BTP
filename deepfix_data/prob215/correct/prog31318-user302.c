#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	int a[n];
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);}
	int j,k;
	int sum=0;
	for(j=1;j<n;j++){
	    if(a[n]%j==0){
	        sum=sum+j; } }
	printf("%d",sum);
	if(sum==a[n]){
	    printf("Yes"); }
	else{
	    printf("No"); }
	return 0; }