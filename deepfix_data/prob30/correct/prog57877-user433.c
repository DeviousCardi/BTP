#include <stdio.h>
int arr[100]={0};
int n,j,s=0,k;
int getMaxLessThan(int);
int getMaxLessThan(int upperLimit) {
    int t=0;
    for(j=0;j<n;j++) {
        if(arr[j]>t&&arr[j]<upperLimit)
        t=arr[j]; }
    return t; }
int main() {
    int p,i;
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