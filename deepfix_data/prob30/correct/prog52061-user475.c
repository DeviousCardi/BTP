#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,temp=0;
    for(i=0;i<n;i++) {
        if((arr[i]>temp)&&(arr[i]<upperLimit))
            temp=arr[i]; }
    return temp; }
int main() {
    int k,i,max=0,ret;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++) {
        if(arr[i]>max)
            max=arr[i]; }
    printf("%d\n",max);
    for(i=1;i<k;i++) {
        ret=getMaxLessThan(max);
        printf("%d\n",ret);
        max=ret; }
    return 0; }