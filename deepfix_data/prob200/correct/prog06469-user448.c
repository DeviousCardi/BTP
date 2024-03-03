#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0;int r=0;
    for (int i=0;i<n;i++){
        if (max<arr[i]){
             r=i;
            max=arr[i]; } }
    arr[r]=0;
    return printf("%d\n",max); }
int main() {
    int i,k,n;
    scanf("%d%d",&n,&k);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for (i=0;i<k;i++){
        getMaxLessThan(k); }
    return 0; }