#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,j;
	  scanf("%d",&a);
    for(i=1;i<=2*a-1;i=i+1){
        printf("*"); }
     printf("\n");
    for(i=1;i<=a;i=i+1){
      for(j=i;j<=a;j++){
          printf("%d",j); }
      printf("\n"); }
	return 0; }