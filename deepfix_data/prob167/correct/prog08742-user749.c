#include<stdio.h>
int sum(int N){
    int num,i,sum,temp;
    scanf("%d",&num);
    if(N==1) return num;
    else{
        sum=0;
        for(i=0;i<N;i++){
            sum=sum+num;
            scanf("%d",&num); }
        return sum; } }
int main() {
    int N;
    scanf("%d",&N);
    printf("%d",sum(N));
    return 0; }