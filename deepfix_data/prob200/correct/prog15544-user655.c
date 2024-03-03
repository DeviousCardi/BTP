#include <stdio.h>
int arr[100]={0};
int n;
int index=0;
int getMaxLessThan(int upperLimit) {
    int a=upperLimit;
    int count=arr[0];
    int i;
    for(i=0;i<a;i++){
        if(arr[i+1]>count){
            count=arr[i+1];
            index=(i+1); } }
    arr[index]=0;
    return count; }
int main() {
    int k;
    scanf("%d%d",&n,&k);
    int a[k];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    int j;
    for(j=0;j<k;j++){
        a[j]=getMaxLessThan(n); }
    int r;
    for(r=0;r<k;r++){
        printf("%d\n",a[r]); }
    return 0; }