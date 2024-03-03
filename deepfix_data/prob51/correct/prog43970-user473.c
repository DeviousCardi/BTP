#include <stdio.h>
int sort(int a[],int k,int n) {
    int i,j,min,temp;
    for(i=0;i<n;i++) {
        min=i;
        for(j=i+1;j<n;j++) {
            if(a[j]<a[min]) {
                min=j;
                j=temp;
                temp=min; } } }
    printf("%d",a[k-1]);
    return sort(a,k,n-1); }
int main() {
    int N,K;
    int a[N];
    scanf("%d %d\n",&N,&K);
    int i;
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    sort(a,K,N);
    return 0; }