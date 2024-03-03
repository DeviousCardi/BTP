#include<stdio.h>
int Sum(long N) {
    long a,long sum;
    if(N==0) {
        return sum; }
    else {
        scanf("%ld",&a);
        sum=sum+a;
        N=N-1;
        Sum(N,sum); } }
int main() {
    long N,y;
    scanf("%ld",&N);
    y=Sum(N);
    printf("%ld",y);
    return 0; }