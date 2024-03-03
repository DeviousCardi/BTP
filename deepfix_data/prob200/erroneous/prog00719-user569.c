#include <stdio.h>
#define LIMIT 100
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=-1;
    int i;
    for(i=0;i<n;i++) {
        if(arr[i]>max && arr[i]<upperLimit) {
            max=arr[i]; } }
    return max; }
int main() {
    int k;
    scanf("%d %d",&n,&k);
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]) }
    int max = LIMIT;
    for(i=0;i<k;i++) {
        max=getMaxLessThan(max);
        printf("%d\n",max); }
    return 0; }