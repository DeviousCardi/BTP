#include <stdio.h>
void dec_sort(int a[],int n) {
    int p;
    int min=0;
    for(i=0;i<n;i++)
        if(min<a[i]) {
            min=a[i];
            p=i; }
    a[p]=a[n];
    a[n]=min;
    if(n==1)
    return;
    else
    dec_sort(a,n-1); }
int main() {
    int N,K,i,j;
    scanf("%d %d",&N,&K);
    int a[N];
    for(i=0;i<N;i++)
        scanf("%d",a[i]);
    dec_sort(a[],N);
    printf("%d",a[K-1]);
    return 0; }