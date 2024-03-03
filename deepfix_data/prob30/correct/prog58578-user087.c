#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) { }
int main()
{   int i;int k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
            scanf("%d ",&arr[i]); }
    int max=arr[0];
    for(i=1;i<n;i++) {
            if(arr[i]>max)
            max=arr[i]; }
    return 0; }