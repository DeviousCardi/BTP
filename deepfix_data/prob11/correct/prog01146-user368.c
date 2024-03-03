#include <stdio.h>
int sum;
int checksum(int arr[30],int flag,int size,int sum,int sum1){
    if (flag==size){return sum;}
    return checksum(arr,flag+1,size,sum,sum1+arr[flag])||checksum(arr,flag+1,size,sum,sum1); }
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int array[a];
    for(int i=0;i<a;i++){
        scanf("%d",array[i]); }
    checksum(array,0,a,b,0);
    return 0; }