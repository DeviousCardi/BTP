#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for (i=0;i<n;i++){
	    if (i<=(n+1)/2){
	        for (j=0;j<(n+1)/2;j++){
	            if ((j==(n-1)/2) || j==((n-(2*i-1))/2)){
	                printf("%c",'*');}
	            else {printf ("%c",' ');}
	        }printf("\n"); }
	    else {
	        for(j=0;j<(n-1)/2;j++){
	            if (j==(n-1)/2 || j==((2*i)+1)-((n+1)/2)){
	                 printf("%c",'*');}
	            else {printf ("%c",' ');} }
	        }printf("\n"); }
	return 0; }