#include <stdio.h>
int arr[100];
int n,i,j,s=0,k;
int getMaxLessThan(int upperLimit) {
    int t=0;
    for(i=0;i<n;i++) {
        if(arr[i]>t&&arr[i]<upperLimit)
        t=arr[i]; }
    return t; }
int main() {
    int p;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        if(arr[i]>s)
        s=arr[i]; }
    for(i=0;i<k;i++) {
       printf("%d\n",s);
       p=getMaxLessThan(s);
       s=p; }
    return 0; }