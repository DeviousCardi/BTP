#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,t,i,j,k;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	     scanf("%d",&a[i]);
	     printf("\n"); }
	scanf("%d",&t);
	int b[t];
	for(j=0;j<t;j++) {
	     scanf("%d",&b[j]);
	     printf("\n"); }
	if(n==1) {
	    printf("\n""Yes"); }
	else {
	for(k=0;k<t;k++) {
	    if(b[k]==0) {
	        if(a[0]>a[1]) {
	             printf("\n""Yes"); }
	        else {
	             printf("\n""No"); } }
	     else if(b[k]==n-1) {
	          if(a[n-1]>a[n-2]) {
	               printf("\n""Yes"); }
	          else {
	               printf("\n""No"); } }
	     else {
	     if((a[b[k]]>a[b[k]+1])&&(a[b[k]]>a[b[k]-1])) {
	        printf("\n""Yes"); }
	   else {
	        printf("\n""No"); } } } }
	return 0; }