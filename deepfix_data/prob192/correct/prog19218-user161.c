#include <stdio.h>
#include <stdlib.h>
int main() {
  int h,i,j,k;
  scanf("%d",&h);
  for(i=1;i<=h;i=i+2) {
      for(k=0;k<h-i;k=k+2) {
            printf(" "); }
      for(j=0;j<i;j++) {
               printf("*"); }
      printf("\n"); }
  for(i=h-2;i>0;i=i-2) {
      for(k=0;k<h-i;k=k-2) {
            printf(" "); }
      for(j=0;j<i;j++) {
              printf("*"); }
        printf("\n"); }
	return 0; }