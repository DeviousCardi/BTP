#include<stdio.h>
int main() {
    int n,i,sum,num[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]); }
    sum = arr_sum(num,n);
    printf("%d",sum);
    return 0; }
int arr_sum(int num[100000],int k){
    int sum=0;
    if(k<0){
        return sum;
    }else{
        sum=sum+num[k]; } }