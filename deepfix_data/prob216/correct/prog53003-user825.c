#include <stdio.h>
#include <stdlib.h>
int fib(int k){
    if(k == 1){
        return 0; }
    if(k == 2){
        return 1; }
    else{
        return fib(k-1)+fib(k-2); } }
int main() {
    int i;
    int k,t;
    scanf("%d",&t);
    for( i = 0 ; i<t ; i++){
       scanf("%d",&k); }
    fib(k);
    return 0; }