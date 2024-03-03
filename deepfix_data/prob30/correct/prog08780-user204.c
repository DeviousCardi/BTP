#include <stdio.h>
#include<limits.h>
int arr[100]={0};
int n,k;
int getMaxLessThan(int upperLimit) {
    int i,d;
    d=0;
    for(i=0;i<n;i++){
        if(arr[i] < upperLimit){
            if(d<arr[i])
            d=arr[i]; }
        return d; } }
int main() {
    scanf("%d %d",&n,&k);
    int i,m=INT_MAX,j=0,upperLimit;
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    while(j<k){
        m=getMaxLessThan(m);
        printf("%d\n",m);
        j++; }
    return 0; }