#include <stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int min(int a,int b) {
    if(a>b)
    return b;
    else
    return a; }
int main() {
    int i,n;
    int k=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        k=max(arr[i],k); }
    int temp=k;
    for(i=0;i<n;i++) {
        k=min(arr[i],k); }
    for(i=0;i<n;i++) {
        if(arr[i]!=temp&&arr[i]!=k)
        printf("%d ",arr[i]);
        else if(arr[i]==temp)
        printf("%d ",k);
        else
        printf("%d ",temp); }
    printf("end");
    return 0; }