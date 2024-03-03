#include <stdio.h>
int arr[100]={0};
int n,k;
int getMaxLessThan(int upperLimit) {
    int i,a=0;
    for(i=0;i<n; i++) {
        if((arr[i]>a)&&(arr[i]<=upperLimit))
           a =arr[i]; }
    return a; }
int main() {
    int i,b[100],a=0;
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    int max=arr[0];
    for (i=1;i<n;i++) {
        if(arr[i]>max)
        max=arr[i]; }
    b[0]=max;
    printf("%d",getMaxLessThan(b[0]));
    for(i=1;i<k;i++) {
        b[i]=getMaxLessThan(b[i-1]);
        printf("%d\n",b[i]); }
    for(i=0;i<k;i++)
    printf("%d\n",b[i]);
    return 0; }