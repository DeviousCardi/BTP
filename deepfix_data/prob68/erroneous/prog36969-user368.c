#include<stdio.h>
int mult(double arr[],int index,int size){
    if(index==size-1){return (arr[index];)
    arr[index+1]=arr[index]*arr[index+1];
    return mult(arr,index+1,size); }
int main() {
    int k;
    scanf("%d",&k);
    double num[k+1];
    for(int i=0;i<k;i++){
        scanf("%lf",&num[i]); }
    printf("lf",mult(num,0,k));
    return 0; }