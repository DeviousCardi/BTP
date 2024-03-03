#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hanoi(int n) {
    if(n==0)
    return 0;
    if(n>0) {
    return hanoi(n-1);
    return hanoi(1);
    return hanoi(n-1); }
    return (2*hanoi(n-1)+1); }
int main() {
   int test,cases,i;
   scanf("%d\n",&test);
   for(i=0;i<test;i++) {
    scanf("%d",&cases);
    printf("%d\n",hanoi(cases)); }
	return 0; }