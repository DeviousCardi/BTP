#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int max=0,i;
    for(i=0;i<n;i++) {
        if(arr[i]>max&&arr[i]<=upperlimit)
            max=arr[i]; }
    return max; }
int main() {
    int k,max=0,i;
    int choc[k];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++) {
        if(arr[i]>max)
            max=arr[i]; }
    choc[0]=max;
    for(i=1;i<k;i++)
        choc[i]=getMaxLessThan(choc[i-1]);
    for(i=0;i<k;i++)
        printf("%d\n",choc[i]);
    return 0; }