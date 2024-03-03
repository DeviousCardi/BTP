#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit)
{   int  nextmax,i;
    nextmax = arr[i];
    for(i=0;i<n;i++){
        if((arr[i] > nextmax) && (arr[i] < upperLimit)){
            nextmax = arr[i]; } }
    upperLimit = nextmax;
    printf("%d\n",upperLimit);
    getMaxLessThan(upperLimit); }
int main()
{   scanf("%d",&n);
    int k,i;
    scanf("%d",&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    int max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i]; } }
    printf("%d\n",max);
    for(i=0;i<k-1;i++){
        getMaxLessThan(max); }
    return 0; }