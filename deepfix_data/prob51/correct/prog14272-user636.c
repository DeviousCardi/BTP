#include <stdio.h>
void dec_sort(int a[],int n) {
    int p,i;
    int min=1000;
    for(i=0;i<n;i++) {
        if(min>a[i]) {
            min=a[i];
            p=i; } }
    a[p]=a[n-1];
    a[n-1]=min;
    if(n==2)
    return;
    else
    {dec_sort(a,n-1);} }
int main() {
    int N,K,i;
    scanf("%d %d",&N,&K);
    int a[N];
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    dec_sort(a,N);
        printf("%d ",a[K-1]);
    return 0; }