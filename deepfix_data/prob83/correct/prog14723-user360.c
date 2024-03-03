#include <stdio.h>
#include <string.h>
int rotate(int [], int, int);
int main() {
    int n,arr[100],d,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    scanf("%d",&d);
    rotate(arr,d,n);
    for(i=0;i<n;i++)
       printf("%d ",arr[i]);
    return 0; }
int rotate(int a[], int d, int n) {
    int i,t,len,k;
    len=n;
    for(i=0; i<len; i++) {
        k=len+d+i;
        a[k]=a[i]; }
    for(i=0; i<len; i++) {
        k=len+d+i;
        a[i]=a[k]; }
    return 0; }