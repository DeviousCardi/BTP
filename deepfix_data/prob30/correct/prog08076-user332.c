#include <stdio.h>
int arr[100]={0};
int n,i;
int getMaxLessThan(int upperLimit) {
    int m;
    for(i=0;i<100;i++) {
        if(arr[i]<upperLimit && arr[i]>m)
        m=arr[i]; }
    return 0; }
int main() {
    int k,temp;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int z;
    z=1000000;
    getMaxLessThan(z);
    for(int i=0;i<k;i++) {
        for( int j=0;j<k;j++) {
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                printf("\n %d",temp); } } }
return 0; }