#include <stdio.h>
#include <stdlib.h>
unsigned long int catalan(unsigned int n);
unsigned long int catalan(unsigned int n){
         if(n==0)
           return 1;
         long int num=2*((2*n-1)/(n+1))*catalan(n-1);
         return num; }
int main() {
    int n;
    scanf("%d",&n);
    int k;
    for(k=0;catalan(k)<n;){
        k++; }
    k=k-1;
    printf("%ld",catalan(0));
    return 0; }