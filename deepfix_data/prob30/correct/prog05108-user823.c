#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit)
{   int max1,i;
    for(i=0; i <n; i++)
        printf("%d",arr[i]);
    max1=0;
    for(i=0;i<n;i++){
        if(arr[i]>max1&&arr[i]<upperLimit){
            max1=arr[i]; } }
    printf("max1=%d\n",max1);
    return max1; }
int main() {
    int i,x,n,k,max=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        if(max<arr[i])
            max=arr[i]; }
    int arr2[k];
    for(i=0;i<k;i++){
        x=getMaxLessThan(max);
        printf("%d\n",x);
        arr2[i]=x; }
    return 0; }