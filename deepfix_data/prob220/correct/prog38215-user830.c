#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j;
	int h;
	scanf("%d",&h);
 for(i=1;i<=h;i++){
  for(j=0;j<(2*h-2);j++){
    if(i==h || j==(h-1)+(i-1)||j==(h-1)-(i-1)){
    printf("*"); }
    else{
    printf("k"); } }
  if(i!=h)
  printf("\n"); }
	return 0; }