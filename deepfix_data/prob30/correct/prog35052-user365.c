#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,given,diff,max=0;
    for(i=0;i<n;i++){
        if(arr[i]==upperLimit) given=i; }
    for(i=0;i<n&&arr[i]<arr[given];i++){
        if(max<arr[i]) max=arr[i]; }
    return max; }
int main() {
    int k,i=0;
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    printf("%d",getMaxLessThan(k));
    return 0; }