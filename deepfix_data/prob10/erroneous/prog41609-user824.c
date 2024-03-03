#include<stdio.h>
int arr_max(int x,int arr[])
{int max=0,cnt;
    for(int i=0;i<x;i++)
    {   cnt=1;
        for(int j=i+1;j<x;j++) {
            if(arr[i]<arr[j])
              cnt++;
            if(max<cnt)
              max=cnt; } }
    return max; }
int main() {
    int n,a[20];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    max=arr_max(n,a[i]);
    printf("%d",max);
    return 0; }