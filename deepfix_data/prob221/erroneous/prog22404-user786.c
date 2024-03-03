#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k,l;
	scanf("%d",&h);
	for(i=1;i<=h;i++){
	if(i==1){
	for(j=1;j<=2*h-1;j++)
	{printf("*");} }
	else if((i>=2)&&(i<=h-1)) {
	for(k=1;k<=2*h-1;k++){
	if(k=i||k=2*h-i){
	printf("*");} } }
	else{for(l=1;l<=2*h-1;l++){
	    if(l=h){printf("*");} } } }
	printf("\n"); }
	return 0; }