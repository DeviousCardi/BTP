#include <stdio.h>
void sort(int [],int ,int);
int main() {
    int n,arr[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    if(n%2==0) {
        sort(arr,0,n);
        float med=(arr[n/2]+arr[n/2-1])/2.0;
        printf("%.1f",med); }
    else {
        sort(arr,0,n);
        int med1=(arr[n/2]);
        printf("%d",med1); }
    return 0; }
void sort(int a[],int start,int size) {
    int i,tmp,j;
    if(start==size)
    return ;
    int max=a[start];
    for(i=0;i<size;i++) {
        if(max<a[i]) {
            max=a[i];
            j=i; } }
    tmp=a[size-1];
    a[size-1]=a[j];
    a[j]=tmp;
    sort(a,start,size-1); }