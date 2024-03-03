#include <stdio.h>
int n;
int arr[100]={0};
int getMaxLessThan(int upperLimit) {
    int m=arr[0];
    for(int j=1;j<upperLimit;j++){
        if(arr[j]>m)
            m=arr[j];
        else
            m=arr[j-1]; }
    return m; }
int main() {
    int k;
    scanf("%d %d\n",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(int s=0;s<k;s++){
        int x=getMaxLessThan(n-s-1);
        printf("%d ",x); }
    return 0; }