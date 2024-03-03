#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n],max=0;
    for(int i=0;i<n;i++)
    scanf("%d,",&arr[i]);
    for(int i=0;i<n;i++)
    printf("%d",arr[i]);
    for(int i=0;i<n;i++) {
        if(arr[i]>max)
        max=arr[i]; }
    int arr2[max],c=0;
    for(int i=0;i<max;i++)
    arr2[i]=0;
    for(int i=0;i<n;i++)
    arr2[(arr[i]-1)]++;
    for(int i=0;i<max;i++) {
        if(arr[i]==(i+1) || arr[i]==0)
        c++; }
    printf("%d %d\n",c,max);
    if(c==max)
    printf("Yes");
    else
    printf("No");
    return 0; }