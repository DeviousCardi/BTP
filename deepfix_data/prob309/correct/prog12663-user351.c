#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n+1];
    int arr2[n+1];
    int f=0;
    for(int i=1;i<=n;i++) {
        arr2[i]=0; }
    for(int i=1;i<=n;i++) {
        scanf("%d,",&arr[i]);
        arr2[arr[i]-1]++; }
    for(int i=1;i<=n;i++) {
        if(arr2[i]!=i || arr2[i]!=0) {
            f=1;break; } }
    if(f==1)
    printf("No");
    else
    printf("Yes");
    return 0; }