#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,i,lines,spaces,count;
	  scanf("%d",&a);
    for(i=1;i<=2*a-1;i=i+1){
        printf("*"); }
	  count=a;
      printf("\n");
    for(lines=1;lines<=a-2;lines++){
          for(spaces=1;spaces<=lines;spaces++){
              printf(" "); }
            if(lines==a-2)break;
          printf("*");
           for(spaces=1;spaces<=count;spaces++){
               printf(" "); }
          count = count-2;
          printf("*");
          printf("\n"); }
    if(a>2){
              printf("* *\n"); }
    printf("*\n");
	return 0; }