#include <stdio.h>
int arr[100]={0};
int n,i,j;
int getMaxLessThan(int upperLimit) {
    int i,j,temp=0;
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i]>arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp; } }
    }{int max=arr[3];
    for(i=0;i<n;i++) {
        if(arr[i]>max) {
            max=arr[i]; }
    }return max;
}}
int main() {
    int n,k,i;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<k;i++)
   { printf("%d\n",getMaxLessThan(n)); }
    return 0; }