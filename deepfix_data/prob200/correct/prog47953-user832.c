#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=-1;
    for(int i=0;i<100;i++) {
        max=(arr[i]>max)?arr[i]:max; }
    return max; }
int main() {
    int k,max,temp;
    scanf("%d %d\n",&n,&k);
    scanf("%d",arr);
    for(int i=1;i<n;i++) {
        scanf(" %d",arr+i); }
    max=arr[0];
    for(int i=0;i<n;i++) {
        if(max<arr[i]) {
            max=arr[i]; } }
    temp=max+1;
    for(int i=0;i<k;i++) {
        temp=getMaxLessThan(temp);
        printf("%d\n",temp); }
    return 0; }