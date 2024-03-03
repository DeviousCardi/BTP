#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,given,diff,max=0;
    for(i=0;i<n;i++){
        if(max<arr[i]&&arr[i]<upperLimit) max=arr[i]; }
    return max; }
int main() {
    int k,i=0,max;
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++){
        if(max<arr[i]) max=arr[i]; }
    for(i=0;i<k;i++){
        printf("%d\n",getMaxLessThan(max));
        max=getMaxLessThan(max); }
    return 0; }