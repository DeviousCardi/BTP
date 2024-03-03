#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,a[20];
    int t,j,b;
	scanf ("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&t);
	for(j=0;j<t;j++) {
	    scanf("%d",&b);
	    if(b==0) {
	        if(a[b]<a[b+1] ) {
	            printf("Yes");
	            printf("\n"); }
	        else {
	        printf("No");
	        printf("\n"); } }
	    else if(b==n-1) {
	        if(a[b]<a[b-1]) {
	        printf("Yes");
	        printf("\n"); }
	        else {
	        printf("No");
	        printf("\n"); } }
	    else {
	     if(a[b]<a[b-1] && a[b]<a[b+1])
	       { printf("Yes");
	        printf("\n"); }
	    else {
	        printf("No \n");printf("\n");} } }
	return 0; }