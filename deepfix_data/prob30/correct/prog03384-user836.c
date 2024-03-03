#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
int max=upperLimit,q=0;
for(int i=0;i<100;i++) {
    if(max>arr[i]) {
        if(q<arr[i])
        q=arr[i]; } }
return q; }
int main() {
    int k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<100;i++)
    scanf("%d",arr[i]);
    int max=0;
    for(int i=0;i<100;i++) {
        if(max<arr[i])
        max=arr[i]; }
    int num[100];
    num[99]=max;
    for(int i=99;i>0;i--) {
        num[i-1]=getMaxLessThan(num[i]); }
    for(int i=99;i>100-k;i--)
    printf("%d\n",num[i]);
    return 0; }