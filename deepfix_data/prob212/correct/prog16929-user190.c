#include <stdio.h>
int fsum(int n){
    int sum = 0;
    while(n>0){
        sum = sum + (n%10);
        n=n/10; }
    return sum; }
int main(){
    int n,sum;
    scanf("%d",&n);
    sum = fsum(n);
    int yr = 2016;
    while(yr%sum != 0){
        yr++; }
    printf("%d",yr);
    return 0; }