#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int a[],int n,int upperLimit) {
    int i,max=0,j;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if((a[j]>a[i])&&(a[j]<upperLimit))
            a[j]=max; } }
    return max; }
int main() {
    int n,k,i,max=0;
    int a[100],b[0];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[i]>max)
        max=a[i]; }
    b[0]=max;
    for(i=1;i<k;i++) {
       b[i]=getMaxLessThan(a,n,b[i-1]); }
    printf("%d ",b[1]);
    return 0; }