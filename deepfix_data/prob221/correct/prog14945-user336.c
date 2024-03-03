#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,height;
    scanf("%d",&height);
    for(i=1;i<=height;i++) {
      for(j=1;j<=2*height-1;j++) {
           if(i==1) {
               printf("*"); }
           else {
             if(i==j||j==2*height-i) {
                 printf("*"); } } }
        printf("\n"); }
	return 0; }