#include <stdio.h>
#include <stdlib.h>
int fib(n){
    if ((n==0)||(n==1))
    return 0;
    else
    return (fib(n-1)+fib(n-2)); }
int main() {
int l,i,y;
scanf("%d",&l);
int x[l];
for(i=0;i<l;i++){
    scanf("%d",&x[i]);
    y=fib(x[i]);
    printf("%d\n",y); }
    return 0; }