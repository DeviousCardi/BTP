#include <stdio.h>
int arr[100]={0};
int n,k;
scanf("%d %d",&n,&k);
int getMaxLessThan(int upperLimit)
{  int i,d;
    d=arr[0];
    for(i=1;i<100;i++){
        i!=upperLimit;
        if(d>arr[i])
        d=arr[i];
        return d; } }
int main() {
    int i;
    for(i=0;i<100;i++)
    scanf("%d",&arr[i]);
    getMaxLessThan(50);
    return 0; }