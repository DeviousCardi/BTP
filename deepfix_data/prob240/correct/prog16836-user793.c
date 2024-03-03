#include <stdio.h>
#include <stdlib.h>
int catalan(int k);
int main() {
	int n,i,arr[15],j;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&arr[i]); }
	for(j=0;j<n;j++) {
    	for(i=0;i<100;i++) {
	     if(catalan(i)>=arr[j]){
	      printf("%d\n",catalan(i-1));
	      break; } } }
	return 0; }
int catalan(int k) {
    int i;
    int num=0;
    if(k==0||k==1)
      return 1;
    else {
         for(i=0;i<k;i++) {
         num=num+catalan(i)*catalan(k-i-1); } }
     return num; }