#include<stdio.h>
int sum(int N){
    long int temp;
    if (N==0)
        return 0;
    else{
        scanf("%ld",&temp);
        return temp+sum(N-1); } }
int main() {
    long int N,a;
    scanf("%ld",&N);
    a=sum(N);
    printf("%ld",sum(N));
    return 0; }