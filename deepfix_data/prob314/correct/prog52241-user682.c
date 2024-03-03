#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,t,k,l=0;
	scanf ("\n%d",&n);
	int a[n];
	for (i=0;i<n;i++){
	    scanf ("\n%d",&a[i]); }
	scanf ("\n%d",&t);
	int b[t];
	for (k=0;k<t;k++){
	    scanf ("\n%d",&b[k]); }
	if (l==0&&a[l]<a[l+1]){
	    printf ("Yes\n"); }
	else {
	    printf ("No\n"); }
	for (l=1;l<t-1;l++){
	    if (a[b[l]]<a[b[l-1]]&&a[b[l]]<a[b[l+1]]){
	        printf ("Yes\n"); }
	    else {
	        printf ("No\n"); } }
	if (l==(n-1)&&a[l]<a[l-1]){
	    printf ("Yes\n"); }
	    else {
	        printf ("No"); }
	return 0; }