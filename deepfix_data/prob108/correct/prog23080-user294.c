#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,x,y;
	scanf("%d",&a);
	for(x=1;x<=a;x++)"\n"; {
	    for(y=1;y<=a;y++){
	        printf("*"); }
	    for(y=3;y<=(a+1)/2;y++){
	        printf(" "); }
	    for(y=(a+1)/2;y<=a-3;y--){
	        printf(" "); }
	    for(y=2;y<=a-2;y++){
	        printf("*"); } }
	return 0; }