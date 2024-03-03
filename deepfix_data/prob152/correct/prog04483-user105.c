#include<stdio.h>
int trueness(int arr[],int size,int start,int sum,int sum2){
    if(sum%2!=0){
        printf("1%d\n",sum%2);
        return 0; }
    else if(sum2==size/2){
        return 1; }
    else{
        for(int i=start;i<size;i++){
            if(trueness(arr,size,start+1,sum,sum2-arr[i-1])==1){
                return 1; }
            else{
                continue; } }
        return 0; } }
int main(){
    int size;
    scanf("%d\n",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]); }
    int sum=0;
    for(int i=0;i<size;i++){
        sum = sum+arr[i]; }
    int sum2 = sum;
    printf("%d",trueness(arr,size,1,sum,sum2));
    return 0; }