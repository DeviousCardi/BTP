#include <stdio.h>
int arr[100]={0};
int n,i;
int getMaxLessThan(int upperLimit) {
    int m;
    for(i=0;i<100;i++) {
        if(arr[i]<upperLimit && arr[i]>m)
        m=arr[i]; } }
int main()
int k;
scanf("%d %d",&n,&k);
for(int i=0;i<n;i++) {
    scanf("%d",&arr[i]) }
int u=1000000;
for(int i=0;i<k;i++) {
    u= getMaxLessThan(u);
    printf("%d",u); }
    return 0; }