#include <stdio.h>
#include <stdlib.h>
int main() {
    int h;
    scanf("%d",&h);
    int i,j,h;
    for(i=1;i<=h;i++) {
    for(j=i;j<h;j++) {
        printf(" "); }
      for(k=h-i+1;k<h+i;k++) {
          printf("%d",k); }
      printf("\n"); }
	return 0; }