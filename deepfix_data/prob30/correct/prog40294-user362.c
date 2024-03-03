#include <stdio.h>
int arr[100]={0};
int n;
int k,w;
int getMaxLessThan(int upperLimit) {
    int i;
    int max=arr[0];
    if(max<upperLimit) {
        for(i=0;i<n;i++) {
            if(arr[i]>max)
            max=arr[i]; } }
    return max; }
int main() {
    int i,j,c[100],max;
    scanf("%d %d",&n,&n);
    int arr[100];
    max=arr[0];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
            max=arr[i];
        else
            max=max; }
    printf("%d",max);
    for(j=0;j<k;j++) {
        c[i]=getMaxLessThan(max);
        printf("%d\n",c[i]); }
    return 0; }