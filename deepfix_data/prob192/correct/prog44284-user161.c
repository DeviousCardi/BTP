#include <stdio.h>
#include <stdlib.h>
int main() {
  int h,i,j;
  scanf("%d",&h);
  for(i=1;i<=h;i++) {
      for(j=0;j<i;j++) {
          printf("*"); }
      printf("\n"); }
  for(i=h-1;i>0;i--) {
      for(j=0;j<i;j++) {
          printf("*"); }
      printf("\n"); }
	return 0; }