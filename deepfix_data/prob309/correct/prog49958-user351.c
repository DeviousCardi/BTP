#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    int f=0;
    for(int i=0;i<n;i++) {
        arr[i]=0; }
    for(int i=0;i<n;i++) {
        scanf("%d,",&arr[i]);
        arr2[arr[i]]++; }
    for(int i=0;i<n;i++) {
        if(arr2[i]!=i || arr2[i]!=0) {
            f=1;break; } }
    if(f==1)
    printf("No");
    else
    printf("Yes");
    return 0; }