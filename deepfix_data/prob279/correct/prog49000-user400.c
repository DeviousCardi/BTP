#include <stdio.h>
int main() {
    int n,i,j,x,y,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n;i++) {
        x=a[i];
        for(j=0;j<n;j++) {
            if(x==a[j])
            count=count+1;
            if(count==2)
            break; }
        if(count==2)
        break; }
     if(count==2)
     printf("%d\n",x);
    int arr[n];
    for(i=0;i<n;i++) {
        arr[i]=i+1; }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(arr[i]==a[j])
            break; }
        if(j==n-1)
        printf("%d",arr[i+1]); }
    return 0; }