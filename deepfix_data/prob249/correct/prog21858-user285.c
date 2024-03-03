#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h,r,p;
	scanf("%d",&h);
	for(i=1;i<=h;i=i+1){
	   if (i<=((h+1)/2)){
	       for(j=1;j<=i;j=j+1){
	            for(r=j;r<=((h-1)/2);r=r+1){
	              	            printf(" "); }
	           if((j==1)||(j==i)){
	               printf("*"); }
	           else  printf(" "); } }
	   else {
	       for(j=1;j<=h-i+1;j=j+1){
	            for(p=((h+1)/2)-j;p<=((h-1)/2);p=p+1){
	              	            printf(" ");}
	       if((j==1)||(j==h-i+1)){
	               printf("*"); }
	           else printf(" "); } }
	   printf("\n"); }
	      return 0; }