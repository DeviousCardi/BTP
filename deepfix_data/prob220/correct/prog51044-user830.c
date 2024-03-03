#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j;
	int h;
	scanf("%d",&h);
 for(j=1;j<=h;j++){
     printf("\n");
      for(i=1;i<=(2*j-1);i++){
        if(i==j || i==(2*j-1)) {
        printf("*"); }
        else{
        printf(" "); } } }
	return 0; }