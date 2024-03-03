#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit)
{   int max1,i,max;
    max1=0;
    for(i=0;i<n;i++){
    if(arr[i]>max1&&arr[i]<max){
                                max1=arr[i]; } }
        return
        max1; } }
int main() {
    int n,k,max=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++){
                    scanf("%d",&arr[i]);
                    if(max<arr[i])
                    max=arr[i]; }
    int arr2[k];
    for(i=0;i<k;i++){
    x=getMaxLessThan(max);
    arr2[i]=x; }
    for(i=0;i<k;i++){
                    printf("%d",arr2[i]); }
    return 0; }