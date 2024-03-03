#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,lines,spaces,count;
	  scanf("%d",&a);
    for(i=1;i<=2*a-1;i=i+1){
        printf("*"); }
	  count=a;
      printf("\n");
    for(lines=1;lines<=a-1;lines++){
          for(spaces=1;spaces<=lines;spaces++){
              printf(" "); }
          if(lines==a-1){
              printf("*\n");
              break; }
          printf("*");
           for(spaces=1;spaces<=count;spaces++){
               printf(" "); }
          count--;
          printf("*");
          printf("\n"); }
	return 0; }