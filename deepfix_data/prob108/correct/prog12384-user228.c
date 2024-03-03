#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i;int j;
	for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
	    if(i==n){
	        printf("*"); }
    if((i>=2)&&((j>=2)&&(j<=i-1))){
	printf(" ");
    }else{
    printf("*"); } }
	printf("\n"); }
	return 0; }