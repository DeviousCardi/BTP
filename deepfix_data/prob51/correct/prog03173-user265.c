#include <stdio.h>
int main() {
   int N,K,i,j;
   scanf("%d %d",&N,&K);
   int a[N];
   for(i=0;i<N;i++) {
       scanf("%d ",&a[i]); }
    for(i=0;i<N;i++) {
        for(j=0;j<N-1;j++) {
            if(a[j]>a[j+1]) {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp; } } }
    printf("%d ",a[N-K]);
    return 0; }