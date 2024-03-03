#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1){
	    if(i<=(n+1)/2){
	        for(j=1;j<=(n+1)/2;j=j+1){
	       if(j<=(n+1)/2-i){
	           printf(" "); }
	       else{
	           printf("%d",j); } }
	    printf("\n"); }
	    else{
	        for(j=1;j<=(n+1)/2;j=j+1){
	       if(j<=i-(n+1)/2){
	           printf(" "); }
	       else{
	           printf("%d",j); } }
	    printf("\n"); } }
	return 0; }