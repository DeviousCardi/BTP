#include <stdio.h>
#include <stdlib.h>
int steps(int n) {
    if(n==1) {
        return 1; }
    else if(n==0) {
        return 0; }
    else {
        return 2*steps(n-1)+1; } }
int main() {
	int i,t,n,j,k
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    k=0;
	    scanf("%d",&n);
	    if(n>5000000) {
	        printf("no"); }
	    else {
	        for(j=0;j<=n+1;j++) {
	            if(n==steps(j)) {
	                k=1;
	                break; }
	            else if(steps(j)>n) {
	                break; } }
	        if(k==1) {
	            printf("yes\n"); }
	        else {
	            printf("no\n"); } } }
	return 0; }