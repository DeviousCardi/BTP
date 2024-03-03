#include <stdio.h>
#include <stdlib.h>
int main() {
    int t,k,i;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&k);
        check_fib(k); }
	return 0; }
int check_fib(int p)
{   int j;
    for(j=0;j<20;j++) {
        if(fib(j)==p) {
           printf("yes\n");
           return 0; }
        else {
            printf("no\n"); } }
  return 0; }
int fib(int m) {
    if(m<=1)
    return m;
    else
    return fib(m-1)+fib(m-2); }