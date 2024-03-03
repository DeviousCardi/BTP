#include <stdio.h>
#include <stdlib.h>
int rec(int n) {
    if(n==1)
    return 2;
    else
    return 2*rec(n-1); }
int meena(int b) {
    if(b==0)
    return 0;
     int i=0,x=0;
      while(b<=rec(i)) {
      x=rec(i);
      i++; }
    return x; }
int main() {
	int n,k,p,a;
	scanf("%d\n",&n);
	for(p=0;p<n;p++) {
    scanf("%d\n",&k);
   a=meena(k);
   printf("%d\n",a); }
	return 0; }