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
    int i,temp;
    for(i=0;i<d;i++) {
        temp=a[n];
        for(i=n-1;i>0;i--) {
            a[i]=a[i-1]; }
        a[0]=temp; }
    return 0; }