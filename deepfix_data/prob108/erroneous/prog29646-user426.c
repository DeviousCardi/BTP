#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=1,j=1,h;
	char f=' ';
	scanf("%d",&h);
	printf("*\n");
	h=h-2;
	for(i=1;i<=h;i++){
	    printf("*");
	       if(i<(h/2+2)){
	              for(j=1;j<=i;j++){
	              if(j==i)
	              printf("*");
	              else
                  printf("%c",f); } }
	       else{
	              for(j=1;j<=h-i+1){
	              if(j==h-i+1)
	              printf("*");
	              else
                  printf("%c",f); } } }
	    printf("\n"); }
	printf("*");
	return 0; }