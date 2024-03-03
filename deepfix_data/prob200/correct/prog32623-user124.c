#include <stdio.h>
int n;
int arr[100];
int maxdiff=888;
int i,x;
int getMaxLessThan(int upperLimit){
    for (i=0;i<n;i++){
        if(arr[i]<upperLimit){
            x=(upperLimit)-(arr[i]);
            if (x<maxdiff){
                maxdiff=x;
                printf("%d",arr[i]); } } } }
int main(){
    scanf("%d",&n);
    int a=0;
    for (i=0;i<n;i++){
    scanf("%d",&arr[i]); }
    getMaxLessThan;
    return 0; }