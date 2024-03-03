#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0;
    for(int i=0;i<n;i++)
        if(arr[i]>max && arr[i]<=upperLimit)
            max=arr[i];
    return max; }
int main() {
    int k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int b[k];
    b[0]=0;
    for(int i=0;i<n;i++)
        if(b[0]>arr[i])
            b[0]=arr[i];
    for(int j=1;j<k;j++){
        b[j]=getMaxLessThan(b[j-1]-1); }
    for(int j=0;j<k;j++)
        printf("%d\n",b[j]);
    return 0; }