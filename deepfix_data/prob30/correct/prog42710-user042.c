#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,m=0,k=0,a[100]={-1},j;
    for(i=0;i<n;i++) {
        for(j=0;j<=k;j++) {
            if(i==a[j])
            break; }
        if(j<=k)
            break;
        else {
            if(arr[i]<upperLimit&&arr[i]>m) {
                a[k]=i;
                m=arr[i];
                k++; } } }
    return m; }
int main() {
    int i,max=0,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",arr+i);
        if(max<arr[i])
            max=arr[i]; }
    for(i=0;i<k;i++) {
        printf("%d\n",max);
        max=getMaxLessThan(max); }
    return 0; }