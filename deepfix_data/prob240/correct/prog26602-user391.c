#include <stdio.h>
#include <stdlib.h>
unsigned long int catalan(int n);
unsigned long int catalan(int n){
        int k;
         if(n==0)
           return 1;
        long int num=0;
        for(k=0;k<n;k++){
            num=num+catalan(k)*catalan(n-k-1); }
         return num; }
int main() {
    int num_test;
    scanf("%d",&num_test);
    printf("%ld",catalan(3));
    return 0; }