#include <stdio.h>
int arr[100]={0};
int n,k;
int getMaxLessThan(int upperLimit)
{  int i,d;
    d=arr[0];
    for(i=1;i<100;i++){
        if(arr[i]!=upperLimit){
            if(d>arr[i])
            d=arr[i];
            return d; } } }
int main() {
    scanf("%d%d",&n,&k);
    int i,m=0;
    for(i=0;i<100;i++)
    scanf("%d",&arr[i]);
    m=getMaxLessThan(50);
    printf("%d",m);
    return 0; }