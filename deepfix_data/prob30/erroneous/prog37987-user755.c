#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,j,max;
    for(i=0;i<n;i++) {
        if(arr[i]<upperLimit) {
            max=arr[i];
            break; } }
    for(j=i+1;j<n;j++) {
        if(arr[j]<upperLimit) {
            if(arr[j]>max)
                max=arr[j]; } }
    return max; }
int main() {
    int k,i,j,max,t;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    max=arr[0];
    for(i=1;i<n;i++) {
        if(arr[i]>max)
            max=arr[i]; }
    t=max;
    printf("%d\n",t)
    for(i=1;i<k;i++) {
        p=getMaxLessThan(t);
        t=p;
        printf("%d\n",t); }
    return 0; }