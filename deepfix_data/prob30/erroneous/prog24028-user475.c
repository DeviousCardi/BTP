#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,temp=0;
    for(i=0;i<n;i++) {
        if((arr[i]>temp)&&(temp<upperLimit)
            temp=arr[i]; }
    return temp; }
int main() {
    int k,i,max=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++) {
        if(arr[i]>max)
            max=arr[i]; }
    printf("%d\n%d",max,getMaxLessThan(max));
    return 0; }