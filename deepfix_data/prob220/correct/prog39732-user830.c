#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,ctr;
	int h;
	scanf("%d",&h);
 for(i=1;i<h;i++){
  for(j=0,ctr=0;j<=(2*h)-2 && ctr<i;j++){
    if(i==h || j==(h-1)+(i-1)||j==(h-1)-(i-1)){
    printf("*");
    ctr++; }
    else{
    printf(" "); } }
  if(i!=h)
  printf("\n"); }
 for(i=0;i<=(2*h)-2;i++)
 printf("*");
   printf("\n");
	return 0; }