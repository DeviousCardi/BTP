#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<n;i++){
	    for(j=1;j<=(2*i-1);j++){
	        if(j==1||j==(2*i-1)){
	            printf("*"); }
	        else{
	            printf(""); } }
	    printf("\n"); }
	for(i=n;i<=n;i++){
	    for(j=1;j<=(2*i-1);j++){
	        printf("*"); } }
	return 0; }