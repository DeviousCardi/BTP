#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,l,m;
	int a[20];
	int x=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
      scanf ("%d",&m);
	for (l=0;l<m;l++) {
	    scanf ("%d",&x);
	  if(x!=0 && x!=(n-1)) {
	  if((a[x]<a[x-1]) && (a[x]<a[x+1])) {
	  printf("Yes\n"); }
	else {
	    printf ("No\n"); } }
	  else {
	      if(x==0) {
	   if(a[0]<a[1]) {
	   printf ("Yes\n"); }
	   else {
	       printf("No\n"); } }
	   if (x==n-1 &&n!=1) {
	     if(a[x]<a[x-1]) {
	         printf("Yes\n"); }
	     else{
	  printf("No\n"); } } } }
	return 0; }