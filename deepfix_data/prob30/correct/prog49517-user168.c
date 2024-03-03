#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int a[], int n) {
     int i,temp=0;
    for(i=0;i<n;i++)
    {if(temp<a[i])
    temp=a[i];}
    return temp; }
int main() {
    int n,k,temp=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[100],i;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }for(i=0;i<n;i++) {
         int temp=getMaxLessThan(a[100],n);
    }printf("%d ",temp);
    for(i=0;i<k;i++) { }
    return 0; }