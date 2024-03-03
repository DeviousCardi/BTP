#include <stdio.h>
#include <stdlib.h>
int fact(int n);
int comb(int n,int m);
 int cat(int n)
   { if(n==0||n==1)
       return 1;
     else return cat(n-1)*2*(2*n-1)/(n+1); }
int main() {
	return 0; }
int fact(int n)
  { if(n==1||n==0)
    return 1;
    else return n*f(n-1); }
int comb(int n,int m) {
    return fact(n)/(fact(m)*fact) }