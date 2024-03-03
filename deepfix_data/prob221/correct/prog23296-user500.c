#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,lines,spaces,count;
	  scanf("%d",&a);
    for(i=1;i<=2*a-1;i=i+1){
	  count=a-2;
        printf("*"); }
      printf("\n");
    for(lines=1;lines<=a-1;lines++){
          for(spaces=1;spaces<=lines;spaces++){
              printf("_"); }
          printf("*");
           for(spaces=1;spaces<=count;spaces++){
               printf("_");
          count--;
          printf("*");
          printf("\n"); } }
	return 0; }