#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0,t=0;
    for(int i=0;i<n;i++) {
        for(int j=1;j<n;j++) {
            if(arr[i]>arr[j] && arr[i]>max && arr[i]<=upperLimit) {
                    max=arr[i]; } } }
    return max; }
int main() {
    int k,y;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++) {
            if(arr[j]>arr[i] && arr[j]>y)
                y=arr[j]; }
    for(int i=0;i<k;i++) {
        y=getMaxLessThan(y);
        printf("%d\n",y); }
    return 0; }