#include <stdio.h>
#include <stdlib.h>
unsigned long int catalan(int n);
unsigned long int catalan(int n){
         if(n==0)
           return 1;
        unsigned long int pro=2*(2*n-1)*catalan(n-1)/(n+1);
        return pro; }
int main() {
    int num_test;
    scanf("%d",&num_test);
    int x,k;
    unsigned long int num;
    for(x=1;x<=num_test;x++){
        scanf("%ld",&num);
        for(k=0;catalan(k)<num;k++){ }
        k=k-1;
        printf("%ld\n",catalan(k)); }
    return 0; }