#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j;
	int h;
	scanf("%d",&h);
 for(i=1;i<h;i++){
  for(j=1;j<=(2*h-1);j++){
    if(j==(h-1)+(i-1)||j==(h-1)-(i-1)){
    printf("*"); }
    else{
    printf(" ");
    for(j=1;j<=(2*h-1);j++){
    if(j==(2*h-1)){
    printf("*"); } } } }
  printf("\n"); }
	return 0; }