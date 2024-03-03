#include <stdio.h>
#include <stdlib.h>
unsigned long int catalan(int n);
unsigned long int catalan(int n){
        int k;
         if(n==0)
           return 1;
        return 2*((2*n-1)/(n+1))*catalan(n-1); }
int main() {
    int num_test;
    scanf("%d",&num_test);
    int x,k,num;
    for(x=1;x<=num_test;x++){
        scanf("%d",&num);
        for(k=0;catalan(k)<num;k++){ }
        k=k-1;
        printf("%ld\n",catalan(k)); }
    return 0; }