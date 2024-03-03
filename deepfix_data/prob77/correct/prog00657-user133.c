#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[1000];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int s1=0,s2=0;
    for(int i=0;i<n;i++) {
        if(arr[i]>arr[s1])
        s1=i;
        if(arr[i]<arr[s2])
        s2=i; }
    int c=arr[s1];
    arr[s1]=arr[s2];
    arr[s2]=c;
    for(int i=0;i<n;i++)
    printf("%d",arr[i]);
    printf("end");
    return 0; }