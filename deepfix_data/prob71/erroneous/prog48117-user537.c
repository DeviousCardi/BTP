#include <stdio.h>
int sor(int [],int ,int)
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
    if(start==size)
    return ;
    int max=a[0];
    for(int i=0;i<n;i++)
    if(max<a[i])
    max=a[i];
    tmp=a[i];
    a[size-1]=a[i];
    sort(int a,start+1,int size); }