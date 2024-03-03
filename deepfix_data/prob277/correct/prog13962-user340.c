#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
	scanf("%d",&h);
	if(h%2!=0){
	    for(i=h;i>=1;i=i-2){
         for(j=0;j<h-i+1;j++){
             printf(" "); }
                  for(k=(h-i+1);k<=9-h+i;k++){
                  printf("*"); }
              printf("\n"); } }
	return 0; }