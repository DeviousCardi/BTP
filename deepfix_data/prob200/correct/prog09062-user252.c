#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,max=0;
    for(i=0;i<n;i++) {
        if(arr[i]<upperLimit) {
            if(arr[i]>max) max=arr[i]; } }
    return max; }
int main() {
    int k,i,mx=0;
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]);
        if(arr[i]>mx) mx=arr[i]; }
     printf("%d\n",mx);
    while(k>1) {
        mx=getMaxLessThan(mx);
        printf("%d\n",mx);
        k--; }
    return 0; }