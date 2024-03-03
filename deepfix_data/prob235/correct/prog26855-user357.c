#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	scanf("%d",&h);
	int i,j,k,l,t;
	for(i=1;i<=h;i++) {
	   if(i<(h+1)/2) {
	     for(j=i;j<(h+1)/2;j++) {
	         printf(" "); } }
	  else{
	     for(k=1;k<=i-(h+1)/2;k++) {
	         printf(" "); } }
	  if(i<6) {
	    for(l=(h+1)/2-i+1;l<=(h+1)/2+i-1;l++) {
	        printf("%d",l); } }
	     else {
	         for(t=(h+1)/2-(10-i)+1;t<=(h+1)/2+(10-i)-1;t++)
	         printf("%d",t); }
	 printf("\n"); }
	return 0; }