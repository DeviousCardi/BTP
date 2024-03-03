#include <stdio.h>
#include <stdlib.h>
long factorial(int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1); }
long c(int n,int k){
    if(n<k)
        return 0;
    else if(n==0 && k==0)
        return 1;
    else
        return factorial(n)/(factorial(k)*factorial(n-k)) ; }
long sum(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
            return c(2*(n-1),n-1)/(n+1) ; }
int main(){
    int n,r;
    scanf("%d %d",&n,&r);
    printf("%ld",sum(n));
    return 0; }