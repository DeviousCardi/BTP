#include<stdio.h>
int sum(int N){
    long long unsigned sum=0,num,i;
    scanf("%d",&num);
    if(N==1){
        sum=num;
        return sum;
    else sum=num+sum(N-1); }
int main() {
    int N;
    scanf("%d",&N);
    printf("%d",sum(N));
    return 0; }