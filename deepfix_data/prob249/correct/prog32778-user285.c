#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h;
	scanf("%d",&h);
	for(i=1;i<=h;i=i+1){
	   if (i<=((h+1)/2)){
	       for(j=1;j<=i;j=j+1){
	           if((j==2)||(j==i)){
	               printf("*"); }
	           else printf(" "); } }
	   else {
	       for(j=1;j<=h-i+1;j=j+1){
	       if((j==1)||(j==h-i+1)){
	               printf("*"); }
	           else printf(" "); } }
	   printf("\n"); }
	      return 0; }