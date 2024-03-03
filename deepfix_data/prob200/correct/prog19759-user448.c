#include <stdio.h>
int arr[100];
int n;
int getMaxLessThan(int upperLimit) {
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<n-1;j++){
            if (arr[j]<arr[j+1]){
                int k=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k; } } }
    for (i=0;i<upperLimit;i++){
         printf("%d\n",arr[i]);
    }http:
    return i; }
int main() {
    int i,k,n;
    scanf("%d%d",&n,&k);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]); }
        getMaxLessThan(k);
    return 0; }