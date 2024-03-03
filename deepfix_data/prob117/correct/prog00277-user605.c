#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hanoi(int n) {
    if(n==0)
    return 0;
    if(n>0) {
     hanoi(n-1);
     hanoi(1);
     hanoi(n-1); }
    return (2*hanoi(n-1)+1); }
int main() {
   int test,cases,i;
   scanf("%d\n",&test);
   for(i=0;i<test;i++) {
    scanf("%d",&cases);
    printf("%d\n",cases); }
	return 0; }