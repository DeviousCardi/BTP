#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k;
	scanf("%d",&h);
	if(h%2!=0){
	    for(i=h;i>=1;i=i-2){
         for(j=0;j<=(h-i)/2;j++){
             printf(" "); }
                  for(k=(2*i)-1;k>=1;k=k-2){
                  printf("*"); }
              printf("\n"); } }
	int a,b,c;
	    if(h%2!=0){
	     for(a=3;a<=h;a=a+2){
	         for(b=(h-a)/2+1;b>=0;b--){
	             printf(" "); }
	         for(c=3;c<=(2*a)-1;c=c+2){
	             printf("*"); }
	         printf("\n"); } }
	    return 0; }