#include <stdio.h>
int main() {
    int n,k,i;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int count[k];
    for(i=0;i<k;i++)
    count[i]=0;
    for(i=0;i<n;i++) {
        count[arr[i]-1]++; }
    for(i=1;i<k;i++)
    count[i]=count[i]+count[i-1];
    int output[n];
    for(i=0;i<n;i++)
    {   if(count[arr[i]-1]>0) {
            output[count[arr[i]-1]-1]=arr[i];
            count[arr[i]-1]--; } }
    for(i=0;i<n;i++)
    printf("%d ",output[i]); }