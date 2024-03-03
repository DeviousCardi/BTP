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
    int p[k];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    max=arr[0];
    for(i=1;i<n;i++) {
        if(arr[i]>max)
            max=arr[i]; }
    p[0]=max;
    t=p[0];
    for(i=1;i<k;i++) {
        p[i]=getMaxLessThan(t);
        t=p[i]; }
    for(i=0;i<k;i++)
        printf("%d\n",p[i]);
    return 0; }