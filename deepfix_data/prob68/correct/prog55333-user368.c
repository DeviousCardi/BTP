#include<stdio.h>
int mult(int arr[],int index,int size){
    int ans=1;
    if(index==size-1){return ans;}
    return mult(ans*arr[index],index+1,size); }
int main(){
    int k;
    scanf("%d",&k);
    int num[k+1];
    for(int i=0;i<k;i++){
        scanf("%d",&num[i]); }
    printf("%d",mult(num,0,k));
    return 0; }