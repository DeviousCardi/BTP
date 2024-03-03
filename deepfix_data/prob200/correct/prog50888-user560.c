#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i;
    int max=arr[0];
    for(i=1;i<n;i=i+1) {
        if(arr[i]<arr[i+1]) {
            max=arr[i+1]; } }
return 0; }
int main() {
    int n,k;
    scanf("%d%d\n",&n,&k);
    printf("%d",k);
    return 0; }