#include <stdio.h>
#include <stdlib.h>
unsigned long long int catalan(int n);
unsigned long long int catalan(int n){
         int k;
         if(n==0)
           return 1;
        unsigned long int num=0;
        for(k=0;k<n;k++){
            num=num+catalan(k)*catalan(n-k-1); }
        return num; }
int main() {
    int num_test;
    scanf("%d",&num_test);
    int x,k;
    unsigned long long int num;
    for(x=1;x<=num_test;x++){
        scanf("%lld",&num);
        for(k=0;catalan(k)<num;k++){ }
        k=k-1;
        printf("%lld\n",catalan(k)); }
    return 0; }