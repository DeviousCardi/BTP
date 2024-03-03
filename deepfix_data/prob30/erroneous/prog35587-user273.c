#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int t=o,max=0;
    for(int i=0;i<n;i++) {
        if(arr[i]<upperlimit) {
            t=arr[i];
            if(t>max)
            max=t; } }
    return max; }
int main() {
    int j,i,v=100000;
    scanf("%d%d",&n,&k);
    int t[j];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<j;i++) {
        t[i]=getMaxLessThan(v);
        v=t[i];
        printf("%d\n",t[i]); }
    return 0; }