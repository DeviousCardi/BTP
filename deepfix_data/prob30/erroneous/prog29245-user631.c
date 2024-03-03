#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int value=0;
    for(int i=0;i<n:i++){
        if(arr[i]==upperLimit)
            arr[i]=0; }
    for(int i=0;i<n;i++){
        if(arr[i]>value)
            value=arr[i]; }
    return value; }
int main() {
    int maxwt[100],k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",arr[i]);
    maxwt[0]=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxwt[0])
            maxwt[0]=arr[i]; }
    printf("%d\n",&maxwt[0]);
    for(int i=1;i<k;i++){
        maxwt[i]=getMaxLessThan(maxwt[i-1]);
        printf("%d\n",maxwt[i]); }
    return 0; }