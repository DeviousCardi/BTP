#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,y,i,m,n;
	scanf("%d\n",&x);
	int a[x];
	for(i=0;i<=x-1;i++){
	    scanf("%d\n",&m);
	    a[i]=m; }
	scanf("%d\n",&y);
	for(i=1;i<=y;i++){
	    scanf("%d\n",&n);
	    for(i=1;i<x;i++){
	        if(a[n]<=a[i]){
	            printf("Yes"); }
	        else{
	            printf("No"); } } }
	return 0; }