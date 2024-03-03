#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int MAX=0;
    for(int i=0;i<n;i++) {
        if((arr[i]>MAX)&&(arr[i]<upperLimit)) {
            MAX=arr[i]; } }
    return MAX; }
int main() {
    int k,i,upperLimit,max;
    max=0;
    scanf("%d%d\n",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    for(i=0;i<n;i++) {
        if(arr[i]>max) {
            max=arr[i]; } }
    upperLimit=max;
    printf("%d\n",upperLimit);
    for(i=1;i<k;i++) {
        max =getMaxLessThan(upperLimit);
        printf("%d\n",max);
        upperLimit =max; }
    return 0; }