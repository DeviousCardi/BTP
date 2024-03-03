#include <stdio.h>
#include <stdlib.h>
  int  fib(int n){
  if(n==0){
  return 0;}
 else if(n==1){
    return 1;}
 else {
 return (fib(n-1)+fib(n-2)); } }
int main() {
	int t,x,k;
	scanf("%d",&t);
	for(x=1;x<=t;x++){
	    scanf("%d\n",&k);
	fib(k);
	if(k>0){
	    printf("%d\n",fib(k-1)); }
	else
    printf("%d",0); }
	return 0; }