#include <stdio.h>
int sort(int a[],int k,int n) {
    int i,j,min,temp=0;
    for(i=0;i<n;i++) {
        min=i;
        for(j=i+1;j<n;j++) {
            if(a[j]<a[min]) {
              min=j; } }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp; }
    printf("%d",a[n-k]);
    return 0; }
int main() {
    int N,K;
    scanf("%d %d\n",&N,&K);
    int a[N];
    int i;
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    sort(a,K,N);
    return 0; }