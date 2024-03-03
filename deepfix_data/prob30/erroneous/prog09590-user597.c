#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0;
    int i;
    for(i=0;i<5;i++){
        if(arr[i]<upperLimit && arr[i]>max){
            max=arr[i]; }
        return max; } }
int main(){
    int i,ul;
    ul=1000;
    for(i=0;i<5;i++){
        scanf("%d ",&arr[i])
        printf("%d",arr[i]); }
    for(i=0;i<5;i++){
        printf("%d ",getMaxLessThan(ul));
        ul=getMaxLessThan(ul); } }