#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,t,k;
	scanf ("\n%d",&n);
	int a[n];
	for (i=0;i<n;i++) {
	    scanf ("\n%d",&a[i]); }
	scanf ("\n%d",&t);
	int b[t];
	for (k=0;k<t;k++) {
	    scanf ("\n%d",&b[k]); }
	if (t!=1) {
	    for (k=0;k<t;k++) {
	        if (b[k]!=0) {
	            if (a[b[k]]<a[b[k-1]]&&a[b[k]]<a[b[k+1]]) {
	                printf ("Yes\n"); }
	            else {
	                printf ("No\n"); } }
	        else if (b[k]==0) {
	            if (a[k]<a[k+1]) {
	                printf ("Yes\n"); }
	            else {
	                printf ("No\n"); } }
	        else if (b[k]==(n-1)) {
	            if (k==(n-1)&&a[k]<a[k-1]) {
	                printf ("Yes\n"); }
	            else {
	                printf ("No"); } } } }
	else printf ("Yes");
	return 0; }