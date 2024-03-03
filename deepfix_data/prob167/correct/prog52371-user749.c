#include<stdio.h>
long long unsigned sum(long long unsigned N){
    long long unsigned S=0,num;
    scanf("%llu",&num);
    if(N==1){
        S=num;
        return S; }
    else{ S=num+sum(N-1);
    return S; } }
int main() {
    long long unsigned N;
    scanf("%llu",&N);
    printf("%llu",sum(N));
    return 0; }