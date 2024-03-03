#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1=0, n2=0, a1[19], a2[19], flag=0;
	scanf("%d ", &n1);
	for(int i=0; i<n1; i++) {
	    scanf("%d ", &a1[i]); }
	scanf("%d ", &n2);
	for(int i=0; i<n2; i++) {
	    scanf("%d ", &a2[i]); }
	for(int i=0; i<n1-1; i++) {
	    for(int j=0; j<n1-1; j++) {
	        if(a1[j]>a1[j+1]) {
	            int temp = a1[j];
	            a1[j] = a1[j+1];
	            a1[j+1] = temp; } } }
	for(int i=0; i<n1; i++) {
	    printf("%d ", a1[i]); }
	return 0; }