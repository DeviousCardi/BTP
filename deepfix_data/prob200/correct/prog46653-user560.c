#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i;
    int max=arr[0];
    for(i=1;i<n;i=i+1) {
        if(arr[i]<arr[i+1]) {
            max=arr[i+1]; } }
return 0; }
int main() {
    int n,k;
    scanf("%d%d\n",&n,&k);
    int i,j;
    int num[n];
    for(i=0;i<n;i=i+1) {
        scanf("%d",&num[i]); }
    int a;
    for(i=0;i<n;i=i+1) {
        for(j=i+1;j<n;j=j+1) {
            if(num[i]>num[j]) {
                a=num[i];
                num[i]=num[j];
                num[j]=a; } } }
    for(i=n-1;i!=n-k-1;i=i-1) {
        printf("%d\n",num[i]); }
    return 0; }