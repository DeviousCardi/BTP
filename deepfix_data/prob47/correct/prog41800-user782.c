#include <stdio.h>
#include <stdlib.h>
int c(int n,int k){
    if(n<k)
        return 0;
    else if(n==0 && k==0)
        return 1;
    else if(k==0)
        return 1;
    else
        return c(n-1,k)+c(n-1,k-1); }
int sum(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return c(2*(n-1),n-1)-c(2*(n-1),n)+sum(n-1); }
int main(){
        printf("%d\n",sum(4));
    return 0; }