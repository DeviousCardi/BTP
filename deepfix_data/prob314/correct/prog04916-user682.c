#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,t,k,l;
	scanf ("\n%d",&n);
	int a[n];
	for (i=0;i<n;i++){
	    scanf ("\n%d",&a[i]); }
	scanf ("\n%d",&t);
	int b[t];
	for (k=0;k<t;k++){
	    scanf ("\n%d",&b[k]); }
	for (l=0;l<t;l++){
	    if (a[b[l]]<a[b[l-1]]&&a[b[l]]<a[b[l+1]]){
	        printf ("Yes"); }
	    else {
	        printf ("No"); } }
	return 0; }