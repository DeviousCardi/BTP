#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n],count[n];
    for (int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for (int i=0;i<n;i++)
    count[i]=0;
    int max;
    for(int j=0;j<n;j++) {
        max=arr[j];
        for(int i=j;i<n;i++) {
            if(arr[i]>=max)
            count[j]++; } }
    int maximum=count[0];
    for(int i=1;i<n;i++) {
        if(count[i]>maximum)
        maximum=count[i]; }
    printf("%d",maximum+1);
    return 0; }