#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,t,k;
	scanf ("%d\n",&n);
	int a[n];
	for (i=0;i<n;i++) {
	    scanf ("%d\n",&a[i]); }
	scanf ("%d\n",&t);
	int b[t];
	for (k=0;k<t;k++) {
	    scanf ("%d\n",&b[k]); }
	    for (k=0;k<t;k++) {
	        if (b[k]!=0 && b[k]!=n-1) {
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
	                printf ("No"); } } }
		return 0; }