#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,k,j,n;
	scanf("%d",&n);
	for(i=1;i<=2*n+1;i++) {
	 for(j=1;j<=n+1-i;j++) {
	    printf(" "); }
	 if(n%2==0){
	     for(k=1;k<=n;k++){
	         if(k%2==0){
	             printf("*");}
	             else{
	                 printf("x");} } }
	 else{
	     for(k=1;k<=n;k++){
	         if(k%2==0){
	             printf("x");}
	             else{
	                 printf("*");} } }
	 printf("\n"); }
	 return 0; }