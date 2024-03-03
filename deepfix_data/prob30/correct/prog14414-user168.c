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
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[100],i;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }getMaxLessThan(a[i],n);
    for(i=0;i<k;i++) {
        printf("%d\n",a[n-1]);
        n--; }
    return 0; }