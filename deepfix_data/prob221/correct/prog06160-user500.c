#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,j;
	  scanf("%d",&a);
	  printf("*");
    for(i=1;i<=a;i++){
      for(j=i;j<=((i)+(i-1));j++){
        printf("*"); }
      printf("\n"); }
	return 0; }