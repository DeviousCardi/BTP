#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if(n==0)
       return 0;
    else if(n==1)
       return 1;
    else
       return fib(n-1)+fib(n-2); }
int main() {
    int k,t,i,j,flag=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&k);
        for(j=0;j<20;j++)
        if(k==fib(j)){
        printf("\nyes");
        flag=1; }
    if(flag==0)
    printf("\nno"); }
   	return 0; }