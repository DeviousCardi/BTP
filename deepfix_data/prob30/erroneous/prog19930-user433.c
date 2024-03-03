#include <stdio.h>
int arr[100]={0};
int n,i,j,k=0;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++) {
    scanf("%d",&a[i]);
    if(a[i]>k)
    k=a[i]; }
int getMaxLessThan(int upperLimit) {
    int t=0;
    for(i=0;i<n;i++) {
        if(a[i]>t&&a[i]<upperLimit)
        t=a[i]; }
    return t; }
int main() {
    int p;
    for(i=0;i<k;i++) {
       printf("%d\n",k);
       p=getMaxLessThan(k);
       k=p; }
    return 0; }