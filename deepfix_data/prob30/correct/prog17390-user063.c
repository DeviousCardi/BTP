#include <stdio.h>
#include<limits.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0;
    for(int i=0; i<n; i++) {
        if(arr[i]<upperLimit && arr[i]>max)
            max=arr[i]; }
    return max; }
int main() {
    int k;
    scanf("%d %d\n", &n, &k);
    for(int i=0; i<n; i++)
        scanf("%d ", &arr[i]);
    int upper=INT_MAX;
    while(k) {
        printf("%d\n", getMaxLessThan(upper));
        upper=getMaxLessThan(upper);
        k--; }
    return 0; }