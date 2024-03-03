#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    fib[0]=0;
    fib[1]=1;
    if(n==0){
        return 0;
    else{
        if(n==1)
         return 1;
        else
         return fib[n-1]+fib[n-2]; } } }
int main() {
  int p,i,n;
  int a[20];
  scanf("%d\n",&p);
  for(i=0;i<p;i++)
  scanf("%d",&a[i]);
  printf("%d",fib(a[i]));
	return 0; }