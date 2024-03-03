#include <stdio.h>
int arr[100]={0};
int n,i,j,s=0,k,t=0;
int getMaxLessThan(int);
int getMaxLessThan(int upperLimit) {
    for(i=0;i<n;i++) {
        if(arr[i]>t&&arr[i]<upperLimit)
        t=arr[i]; }
    return t; }
int main() {
    int p,i,j;
    scanf("%d ",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        if(arr[i]>s)
        s=arr[i]; }
    for(i=0;i<k;i++) {
       printf("%d\n",s);
       p=getMaxLessThan(s);
       s=p; }
    return 0; }