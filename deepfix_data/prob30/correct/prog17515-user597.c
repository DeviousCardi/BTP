#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0;
    int j;
    for(j=0;j<5;j++){
        if(arr[j]<upperLimit && arr[j]>max){
            max=arr[j]; } }
    return max; }
int main(){
    int i,ul;
    ul=1000;
    for(i=0;i<5;i++){
        scanf("%d ",&arr[i]); }
    for(i=0;i<5;i++){
        printf("%d ",getMaxLessThan(ul));
        ul=getMaxLessThan(ul); } }