#include <stdio.h>
#include<limits.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=INT_MIN;
    for(int i=0;i<n;i++) {
        if(arr[i]<upperLimit&&arr[i]>=max)
        max=arr[i]; }
    return max; }
int main() {
    int k,b[1000];
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    b[0]=getMaxLessThan(INT_MAX);
    for(int i=1;i<k;i++)
    b[i]=getMaxLessThan(arr[i-1]);
    for(int i=0;i<k;i++)
    printf("%d\n",b[i]);
     return 0; }