#include <stdio.h>
int arr[100]={0};
int n,k,l=0;
int getMaxLessThan(int upperLimit) {
    int t=0,i;
    for(i=0;i<n;i++) {
        if(arr[i]<upperLimit&&arr[i]>t)
            t=arr[i];
    }l++;
    printf("%d\n",t);
    if(l<k)
    getMaxLessThan(t);
    return 0; }
int main() {
    int i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    getMaxLessThan(100000);
    return 0; }