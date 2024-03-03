#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n],max=0;
    for(int i=0;i<n;i++)
    scanf("%d,",&arr[i]);
    for(int i=0;i<n;i++) {
        if(arr[i]>max)
        max=arr[i]; }
    int arr2[max],c=0;
    for(int i=0;i<max;i++)
    arr2[i]=0;
    for(int i=0;i<n;i++)
    arr2[arr[i]]++;
    for(int i=0;i<max;i++) {
        if(arr[i]==i || arr[i]==0)
        c++; }
    if(c==max)
    printf("Yes");
    else
    printf("No");
    return 0; }