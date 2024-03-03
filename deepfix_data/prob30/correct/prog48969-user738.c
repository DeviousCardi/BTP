#include <stdio.h>
int arr[100]={0};
int n,i,k;
int getMaxLessThan(int upperLimit) {
    int temp,i,j;
 for(i=0;i<=n-1;i++) {
        for(j=i+1;j<=n;j++) {
            if(arr[i]>arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp; } } }
    return arr[1]; }
int main() {
        int l;
         scanf("%d",&n);
         int s=getMaxLessThan(1);
         printf("%d",s);
    return 0; }