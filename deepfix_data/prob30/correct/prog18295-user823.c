#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit)
{   int max1,i;
    max1=0;
    for(i=0;i<n;i++){
        if(arr[i]>max1&&arr[i]<upperLimit){
            max1=arr[i]; } }
    return max1; }
int main() {
    int i,x,k,max=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        if(max<arr[i])
            max=arr[i]; }
     printf("%d\n",max);
    int arr2[k];
    for(i=0;i<k-1;i++){
        x=getMaxLessThan(max);
        max=x;
        printf("%d\n",x);
        arr2[i]=x; }
    return 0; }