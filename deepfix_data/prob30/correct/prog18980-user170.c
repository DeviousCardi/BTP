#include <stdio.h>
int arr[100]={0};
int n,i;
int getMaxLessThan(int arr[i]) {
    int i,j,tmp;
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            if(arr[i]>arr[j]) {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp; } } }
    return arr[i-1]; }
int main() {
    int i,k,l,j,tmp;
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]);
        a[i]=arr[i]; }
    for(i=n-1;n>=k;i--) {
        for(j=1;j<n;j++) {
            if(a[j-1]>a[j])
            {   tmp=a[j-1];
                a[j-1]=a[j];
                a[j]=tmp; } }
        for(l=0;l<k;l++) {
            printf("%d",getMaxLessThan(a[i]));
        }}
    return 0; }