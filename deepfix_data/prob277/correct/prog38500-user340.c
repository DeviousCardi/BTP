#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
	scanf("%d",&h);
	if(h%2!=0){
	    for(i=h;i>=1;i=i-2){
         for(j=0;j<=(h-i)/2;j++){
             printf(" "); }
                  for(k=(2*i)-1;k>=1;k=k-2){
                  printf("*"); }
              printf("\n"); }
	    for(i=3;i<=h;i++){
	        for(j=(h-3)/2;j>=0;j--){
	            printf(" "); }
	        for(k=i;k<=h;k=k-2){
	            printf("*"); }
	        printf("\n"); }
	    return 0; }
	return 0; }