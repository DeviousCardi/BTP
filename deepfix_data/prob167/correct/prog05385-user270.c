#include<stdio.h>
int sum1(long int sum, long int temp, int n) {
    if(n==0) return sum;
    sum=sum+temp;
    scanf("%ld",&temp);
    return sum1(sum,temp,n-1); }
int main() {
    int n; long int i;
    scanf("%d",&n);
    scanf("%ld",&i);
    printf("%d",sum1(0,i,n));
    return 0; }