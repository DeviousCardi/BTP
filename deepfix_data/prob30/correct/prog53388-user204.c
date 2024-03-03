#include <stdio.h>
#include<limits.h>
int arr[100]={0};
int n,k;
int getMaxLessThan(int upperLimit)
{  int i,d;
    upperLimit=INT_MAX;
    d=arr[0];
    for(i=1;i<100;i++){
        if(arr[i]<=upperLimit){
            if(d>arr[i])
            d=arr[i]; }
            upperLimit=d;
            return d; } }
int main() {
    scanf("%d%d",&n,&k);
    int i,m=0,j=0,upperLimit;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    while(j<k){
        m=getMaxLessThan(upperLimit);
        printf("%d\n",m);
        j++; }
    return 0; }