#include <stdio.h>
int arr[100]={0};
int n;
int k,w;
int getMaxLessThan(int upperLimit) {
    int i;
    int max=-1;
    for(i=0;i<n;i++) {
        if(arr[i]<upperLimit) {
            if(arr[i]>max) {
                max=arr[i]; } } }
    return max; }
int main() {
    int i,j,max,x,y;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    max=arr[0];
    for(i=0;i<n;i++) {
        if(arr[i]>max) {
            max=arr[i]; }
        else {
            max=max; } }
    for(j=0;j<k;j++) {
        x=getMaxLessThan(max);
        printf("%d\n",x); }
    return 0; }