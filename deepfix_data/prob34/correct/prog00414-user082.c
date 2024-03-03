#include <stdio.h>
#include <stdlib.h>
int main() {
	int A[20];
	int n,t,i,index;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&A[i]); }
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&index);
	    if(n==1) {
	        printf("Yes\n");
	        break; }
	    if(index==0) {
	        if(A[index]>A[index+1]) {
	            printf("Yes\n"); }
	        else {
	            printf("No\n"); } }
	   else if(index==n-1) {
	       if(A[index]>A[index-1]) {
	           printf("Yes\n"); }
	       else {
	           printf("No"); } }
	   else {
	    if(A[index]>A[index-1]&&A[index]>A[index+1]) {
	        printf("Yes\n"); }
	    else {
	        printf("No\n"); } } }
	return 0; }