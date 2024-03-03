#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,ctr;
	int h;
	scanf("%d",&h);
 for(i=1;i<=h;i++){
     ctr=0;
  for(j=0;ctr<=i;j++){
    if(i==h || j==(h-1)+(i-1)||j==(h-1)-(i-1)){
    printf("*");
    ctr++; }
    else{
    printf("k"); } }
  if(i!=h)
  printf("\n"); }
	return 0; }