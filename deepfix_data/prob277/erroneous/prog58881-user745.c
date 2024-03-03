#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i, j;
	scanf ("%d", &n);
	for(i=1; i<=(n-1)/2; i++){
	    for(j=1; j<=n; j++){
	        if(j<=(i-1) && j>(n-(i-1))){
	            printf(" "); }
	        else{
	            printf("*"); } }
	    printf("\n"); }
    for(i=1; i<=(n+1)/2); i++;){
        for(j=1; j<=n; j++){
            if((((n+1)/2)-(i-1))<=j && j<=((((n+1)/2)+(i-1))){
                printf("*"); }
            else{
                printf(" "); } }
        printf("\n"); }
	return 0; }