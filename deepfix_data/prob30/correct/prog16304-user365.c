#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,given,diff,max=0;
    for(i=0;i<n;i++){
        if(max<arr[i]&&arr[i]<upperLimit) max=arr[i]; }
    return max; }
int main() {
    int k,i=0,temp;
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    printf("%d\n",getMaxLessThan(1000));
    for(i=0;i<k-1;i++){
        printf("%d\n",getMaxLessThan(temp));
        temp=getMaxLessThan(temp); }
    return 0; }