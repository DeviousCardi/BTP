#include <stdio.h>
int arr[100]={0};
int n;
int min;
int getMaxLessThan(int upperLimit) {
    int i;
    int j=min;
    for(i=0;i<n;i++) {
        if((arr[i]>j)&&(arr[i]<upperLimit))
        j=arr[i]; }
    return j; }
int main() {
    int k;
    scanf("%d %d\n",&n,&k);
    int max=0;
    int mx[k];
    for(int i=0;i<n;i++) {
        scanf("%d ",&arr[i]);
        if(arr[i]>max)
        max=arr[i]; }
    min=arr[0];
    for(int i=0;i<n;i++) {
        if(min>arr[i])
        min=arr[i]; }
    mx[0]=max;
    for(int i=1;i<k;i++) {
        mx[i]=getMaxLessThan(mx[i-1]); }
    for(int i=0;i<k;i++)
        printf("%d\n",mx[i]);
    return 0; }