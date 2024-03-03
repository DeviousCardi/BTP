#include <stdio.h>
#include <stdlib.h>
int main() {
	int h , b ,   i , k ,x ;
	scanf("%d %d",&h , &b );
	for(i = 1;i<=h;i = i+1) {
	    x = i %10;
	    for(k= 1;k<=h -i;k = k +1) {
	        printf(" "); }
	    for( k = 1;k<=b-2*(h-i);k=k+1) {
	        printf("%d",x);
	        x = x +1;
	        x = x %10; }
	    for(k = 1;k<=h-i;k= k +1) {
	        printf(" "); }
	    if(i==h) {
	        break; }
	    else
	    printf("\n"); }
	return 0; }