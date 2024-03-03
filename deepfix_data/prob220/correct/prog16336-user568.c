#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k,l;
	scanf("%d",&h);
	for(i=1;i<=h;i++){
	    if(i!=h){
	    for(j=1;j<=h-i;j++){
	        printf(" "); }
	    for(k=1;k<=2*i-1;k++){
	        if(k==1||k==2*i-1){
	            printf("*"); }
	        else{
	            printf(" "); } } }
	    else{
	        for(l=1;l<=h;l++){
	            printf("*"); } }
	    printf("\n"); }
	return 0; }