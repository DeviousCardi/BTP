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
        float med=(arr[(n)/2]);
        printf("%f",med); }
    return 0; }
void sort(int a[],int start,int size) {
    int i,tmp,j;
    if(start==size)
    return ;
    int max=a[0];
    for(i=0;i<size;i++) {
        if(max<a[i]) {
            max=a[i];
            j=i; } }
    tmp=a[size-1];
    a[size-1]=a[j];
    a[j]=tmp;
    sort(a,start+1,size); }