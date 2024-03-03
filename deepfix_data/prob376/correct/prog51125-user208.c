#include <stdio.h>
#include <stdlib.h>
int term=1;
int r=0;
int fact(n) {
    int f = 1;
    if(n==1||n==0)
        return 1;
    else
        f=n*fact(n-1);
    return f; }
int catalan(int n) {
      if((n-r)==0)
        return term;
      term=term+(fact(n)/(fact(n-r)*fact(r)))*(fact(n)/(fact(n-r)*fact(r)));
      r++;
       return catalan(n); }
int main() {
	int i,t;
	int test;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&test);
	    printf("%d\n",catalan(test)); }
	return 0; }