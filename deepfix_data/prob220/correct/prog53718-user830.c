#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j;
	int h;
	scanf("%d",&h);
 for(i=1;i<=h;i++){
   for(j=1;j<h;j++){
      if(j<=(h-1)){
      printf(" ");}
      else{
    for(j=1;j<=(2*h-1);j++){
        printf("*"); } } } }
      printf("\n");
	return 0; }