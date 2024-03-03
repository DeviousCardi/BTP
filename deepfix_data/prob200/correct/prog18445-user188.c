#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i;
    if(arr[i]>0)
    return arr[i]; }
int main() {
    int n,k,y,i,j;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(j=0;j<=k;j++){
        y=getMaxLessThan(n); }
    return 0; }