#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i, j, count = 0;
	scanf("%d", &n);
	int a[n];
	for(i = 0; i < n; i++){
	    scanf("%d", &a[i]); }
	for(i = 0; i < n; i++){
	        j = i;
	        do{
	            if(a[i] > a[j]){
	                count++; }
	            j++;
	            if(j == n){
	                printf("%d ", count); }
	        }while(j < n);
	    count = 0; }
	return 0; }