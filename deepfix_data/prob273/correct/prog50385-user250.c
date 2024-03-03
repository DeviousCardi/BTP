#include <stdio.h>
#include <stdlib.h>
int main() {
       int b;
       scanf("%d",&b);
       int i,j;
       for(i=1;i<=(b+1)/2;i++) {
           for(j=1;j<=(((b+1)/2)+(i-1));j++)
             {if(j>=(((b+1)/2)-(i-1))&&(j<=(b+1)/2))
                printf("%d",j);
              else
                printf(".");
             }   printf("\n"); }
       for(i=((b+1)/2)-1;i>=1;i--) {
           for(j=1;j<=(((b+1)/2)+(i-1));j++)
             {if(j>=(((b+1)/2)-(i-1))&&(j<=(b+1)/2))
                printf("%d",j);
              else
                printf(".");
             }   printf("\n"); }
	return 0; }