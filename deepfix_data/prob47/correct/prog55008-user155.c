#include <stdio.h>
#include <stdlib.h>
double fact(int n) {
    if(n==0||n==1) {
        return 1; }
    else {
        return (n*fact(n-1)); } }
double catalan(int n)
{  if(n==(-1)||n==0||n==1) {
      return n; }
   else {
      return ((fact(2*n)/(fact(n)*fact(n+1)))+catalan(n-1)); } }
int main() {
	int t,i,r;
	scanf("%d",&t);
	int tc[t];
	for(i=0;i<t;i++) {
	    scanf("%d",&tc[i]);
	    r=1+catalan(tc[i]-1);
	    printf("%d\n",r); }
	return 0; }