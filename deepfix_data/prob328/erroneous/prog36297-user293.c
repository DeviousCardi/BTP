#include <stdio.h>
#include <stdlib.h>
int fibo(int n) {
    if(n==0) return 0;
    else if(n==1) return 1;
    else return (fibo(n-1)+fibo(n-2)); }
void print(int k) {
    for(i=0;i<20;i++)
    if(fibo(i)==k)
    {printf("yes");
    break; }
    if(i==20) printf("no"); }
int main() {
	int t,i,k;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	   scanf("%d",&k);
	   print(k); }
	return 0; }