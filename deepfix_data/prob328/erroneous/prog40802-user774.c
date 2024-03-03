#include <stdio.h>
#include <stdlib.h>
int fib(int n) {
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2); }
int search(int a[],int b,int key) {
    if(b==0)
    return 0;
    if(a[b]==key) {
        return 1; }
    return search(a,b-1,key); }
int main() {
  int n,i,j;
  scanf("%d\n",&n);
  int f[n];
  for(i=0;i<n;i++) {
    scanf("%d\n",&f[i]);
    for(j=0;j<20;j++) {
        if((search(fib,j,f[i]))==1)
        printf("yes\n");
        else
        printf("no\n"); }
	return 0; }