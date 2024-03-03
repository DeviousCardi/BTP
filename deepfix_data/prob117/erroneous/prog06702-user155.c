#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int i=0,j=0;
	scanf("%d",&n);
	int t[n];
	for (i=0;i<n;i++) {
	    scanf("%d",&t[i]); }
	i=0;
	for(j=0;j<n;j++) {
	    while((pow(2,i)-1)<=t[j]) {
	        if(pow(2,i)==t[j]) {
	            printf("yes"); }
	        else{printf("no");}
	        i++; }
	return 0; }