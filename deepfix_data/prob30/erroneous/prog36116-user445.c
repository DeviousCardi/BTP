#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int c;
    c=-1;
    for(i=0;i<n;i++) {
        if((arr[i]>c)&&arr[i]<(upperLimit))
            c=a[i]; }
    return c; }
int main() {
    int i,j,k,t;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",arr[i]);
    c=arr[0];
    for(i=1;i<n;i++) {
        if(arr[i]>c)
        c=a[i]; }
    printf("%d",c);
    for(i=1;i<=k;i++) {
        j=getMaxLessThan(c);
        printf("%d\n",j); }
    return 0; }