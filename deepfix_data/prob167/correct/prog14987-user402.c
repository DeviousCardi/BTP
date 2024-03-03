#include<stdio.h>
int main() {
    int n,i,sum,num[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]); }
    sum = king(num,n);
    printf("%d",sum);
    return 0; }
int king(int num[100000],int k){
    int sum ;
    if(k<0){
        return sum;
    }else{
        sum=sum+num[k]; }
    return sum; }