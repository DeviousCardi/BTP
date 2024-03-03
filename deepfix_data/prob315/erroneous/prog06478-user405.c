#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, array[1000], temp, count[1000], c=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	   scanf("%d", &array[i]);
	for(int i=0; i<n; i++)
	   count[i]=0;
	for(int i=0; i<n-1; i++) {
	    for(int j=i+1; j<n) {
	        if(array[i]>array[j]) {
	            count[i]++; } } }
	for(int i=0; i<(n-1); i++) {
	    for(int j=i+1; j<n; j++) {
	        if(array[i]>array[j]) {
	            temp=array[i];
	            array[i]=array[j];
	            array[j]=temp;
	            c++; } } }
	printf("%d\n", c);
	for(int i=0; i<n;i++) {
	    printf("%d ", count[i]); }
	return 0; }