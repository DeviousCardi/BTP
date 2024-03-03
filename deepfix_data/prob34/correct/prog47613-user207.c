#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	int a[20];
	int x=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++){
	    scanf("%d",&a[i]); }
      scanf ("%d",&k);
	for (j=0;j<k;j++){
	    scanf ("%d",&x);
	  if(x!=0 && x!=(n-1)){
	  if((a[x]>a[x-1]) && (a[x]>a[x+1])) {
	  printf("Yes\n"); }
	else {
	    printf ("No\n"); } }
	  else {
	      if(x==0){
	   if(a[x-1]>a[x]){
	   printf ("Yes\n"); }
	   else {
	       printf("No\n"); } }
	   if (x==n-1){
	     if(a[x]>a[x-1]){
	         printf("Yes\n"); }
	     else{
	  printf("No\n"); } } } }
	return 0; }