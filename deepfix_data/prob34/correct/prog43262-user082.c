#include <stdio.h>
#include <stdlib.h>
int main() {
	int A[20];
	int n,t,i,index;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&A[i]); }
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&index);
	    if(index==0) {
	        if(A[index]>A[index+1]) {
	            printf("Yes\n"); }
	        else {
	            printf("No\n"); } }
	   else {
	    if(A[index]>A[index-1]&&A[index]>A[index+1]) {
	        printf("Yes\n"); }
	    else {
	        printf("No\n"); } } }
	return 0; }