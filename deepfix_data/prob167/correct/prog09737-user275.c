#include<stdio.h>
int sum(int N,int array[]){
    int temp,count=0;
    if (N==0)
        return 0;
    else{
        return array[N-1]+sum(N-1,array); } }
int main() {
    int N;
    scanf("%d",&N);
    int array[N];
    for(int i=0;i<N;i++)
        scanf("%d",&array[i]);
    printf("%d",sum(N,array));
    return 0; }