#include <stdio.h>
int main() {
    int arr[100000],count[100000],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d,",&arr[i]);
    for(i=0;i<n;i++)
    count[i]=0;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(arr[j]==i+1)
            count[i]++; } }
    for(i=0;i<n;i++)
    if(count[i]==i)
    printf("Yes");
    return 0; }