#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,max=0;
    for(i=0;i<100;i++) {
            if(arr[i]>max&&arr[i]<upperLimit)
                max=arr[i]; }
    return max; }
int main() {
    int k,i,upperLimit=10000;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<k;i++) {
            upperLimit=getMaxLessThan(upperLimit);
            printf("%d\n",upperLimit); }
    return 0; }