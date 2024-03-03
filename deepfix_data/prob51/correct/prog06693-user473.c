#include <stdio.h>
int sort(int a[],int k,int n) {
    int i,j,min,temp;
    for(i=0;i<n;i++) {
        min=i;
        for(j=i+1;j<n;j++) {
            if(a[j]<=a[min]) {
                a[min]=a[j-1];
                a[j-1]=a[temp];
                a[temp]=a[min]; } } }
    printf("%d",a[k-1]);
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