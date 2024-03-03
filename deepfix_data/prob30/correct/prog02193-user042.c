#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,m=0;
    for(i=0;i<n;i++) {
        if(arr[i]<upperLimit&&arr[i]>=m) {
            m=arr[i];
            arr[i]=0; } }
    return m; }
int main() {
    int i,max=0,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",arr+i);
        if(max<arr[i])
            max=arr[i]; }
    for(i=0;i<k;i++) {
        printf("%d\n",max);
        max=getMaxLessThan(max); }
    return 0; }