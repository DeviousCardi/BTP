#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if (n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    return fib(n-1)+fib(n-2); }
int member(int k) {
  int i;
  for(i=1;i<21;i++) {
        if(k==fib(i))
        {return 1;} }
return 0; }
int main() {
    int t,i;
    scanf("%d",&t);
    int k[t];
    for(i=0;i<t;i++)
    {scanf("%d\n",&k[i]);}
	return 0; }