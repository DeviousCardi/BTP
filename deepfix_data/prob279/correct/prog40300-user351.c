#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    int r,m;
    for(int i=0;i<n;i++) {
        arr2[i]=0; }
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        arr2[arr[i]-1]++; }
    for(int i=0;i<n;i++) {
        if(arr2[i]==2)
        r=i+1;
        else if(arr2[i]==0)
        m=i+1; }
    printf("%d\n%d",r,m);
    return 0; }