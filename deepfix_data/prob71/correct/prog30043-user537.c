#include <stdio.h>
int sort(int [],int ,int);
int main() {
    int n,arr[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    if(n%2==0) {
        sort(arr,0,n);
        int med=(arr[n/2]+arr[n/2+1])/2;
        printf("%d",med); }
    else {
        sort(arr,0,n);
        int med=(arr[(n+1)/2])/2;
        printf("%d",med); }
    return 0; }
int sort(int a[],int start,int size) {
    int i,tmp;
    if(start==size)
    return a[0] ;
    int max=a[0];
    for(i=0;i<size;i++)
    if(max<a[i])
    max=a[i];
    tmp=a[i];
    a[size-1]=a[i];
    sort(a,start+1,size); }