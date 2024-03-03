#include <stdio.h>
int arr[100]={0};
int n;
int maxdiff=888;
int i,x;
int getMaxLessThan(int upperLimit){
    for (i=0;i<n;i++){
        if(arr[i]<upperLimit){
            x=(upperLimit)-(arr[i]);
            if (x<maxdiff){
                maxdiff=x;
                return arr[i]; } } } }
int main(){
    int a=0;
    for (i=0;i<n;i++){
    scanf("%d",&arr[i]); }
    a=getMaxLessThan(4);
    printf("%d",a);
    return 0; }