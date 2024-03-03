#include <stdio.h>
int arr[100]={0};
int n;
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int getMaxLessThan(int upperLimit) {
    int i,d=0,l=0;
    int temp[n];
    for(i=0;i<n;i++) {
        if(arr[i]<upperLimit)
        temp[d]=arr[i];
        d++; }
    for(i=0;i<d;i++) {
        l=max(l,temp[i]); }
    return l; }
int main() {
    int k,j,m=0;
    scanf("%d %d",n,k);
    for(j=0;j<n;j++) {
        scanf("%d",&arr[j]); }
    for(j=0;j<n;j++) {
        m=max(m,arr[j]); }
    printf("%d\n",m);
    for(j=1;j<k;j++) {
       m=getMaxLessThan(m);
       printf("%d\n",m); }
    return 0; }