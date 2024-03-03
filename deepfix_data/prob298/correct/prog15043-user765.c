#include <stdio.h>
#include <stdlib.h>
int catalan(int j) {
    if(j==1) {
        return 1; }
        return (2.0*(2*j+1)/(j+1)) * catalan(j-1); }
int main() {
	int t;
	scanf("%d",&t);
	int array[t];
	int i;
	for(i=0;i<t;i++) {
	    scanf("%d",&array[i]); }
	int j;
	for(i=0;i<t;i++) {
	    for(j=1;j<=17;j++) {
	        if(array[i]==catalan(j)) {
	            printf("yes");
	            break; } }
	   if(j==18) {
	       printf("no"); }
	   if(i==t-1) {
	       break; }
	   printf("\n"); }
	return 0; }