#include <stdio.h>
#include <stdlib.h>
int fact(int n) {
    if(n==0||n==1) {
    return 1; }
    else{
    return n*fact(n-1);} }
int catalan(int n) {
   if(n==0) {
       return 0; }
   if (n==1) {
       return 1; }
   else {
      return ((fact(2*n)/(fact(n+1)*fact(n)))+catalan(n-1)+1); } }
int main() {
	int t,i;
	scanf("%d",&t);
	int tc[t];
	for(i=0;i<t;i++) {
	    scanf("%d",&tc[i]);
	    printf("%d\n",catalan(tc[i])); }
	return 0; }