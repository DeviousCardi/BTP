#include <stdio.h>
int arr[100]={0};
int n,i;
int getMaxLessThan(int upperLimit) {
    int m;
    for(i=0;i<100;i++) {
        if(arr[i]<upperLimit && arr[i]>m)
        m=arr[i]; } }
int main() {
    int k,temp;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int z=1000000;
    for(int i=0;i<k;i++) {
        z= getMaxLessThan(z);
        printf("\n %d",z);
        for( int j=0;j<k;j++) {
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp; } } }
return 0; }