#include <stdio.h>
#include <stdlib.h>
int main() {
	int h , b , n , i , k ,x ;
	scanf("%d %d",&h , &n );
	for(i = 1;i<=h;i = i+1) {
	    x = i %10;
	    for(k= 1;k<=n -i;k = k +1) {
	        printf("\t"); }
	    for( k = 1;k<=b-h+1;k=k+1) {
	        printf("%d",x);
	        x = x +1;
	        x = x %10; }
	    for(k = 1;k<=n-i;k= k +1) {
	        printf("\t"); }
	    printf("\n"); }
	return 0; }