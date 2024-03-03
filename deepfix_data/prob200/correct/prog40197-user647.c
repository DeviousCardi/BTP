#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0,i;
    for(i=0;i<n;i++){
        if((arr[i]>=max)&&(arr[i]<=upperLimit)){
            max=arr[i]; } }
    printf("%d\n",max);
    return max; }
int main() {
    int k,i,max=100000000;
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]); }
    for(i=0;i<k;i++){
        max=getMaxLessThan(max-1); }
    return 0; }