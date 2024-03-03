#include <stdio.h>
int main() {
   int N,K,arr[100000],max;
   scanf("%d %d",&N,&K);
    for(int i=0;i<N;i++) {
        scanf("%d",&arr[i]); }
    max=arr[0];
    for(int i=0;i<N;i++) {
        for(int j=i+1;j<N;j++) {
           if(arr[i]<=arr[j])
            max=arr[i];
            arr[i]=arr[j];
            arr[j]=max; } }
    printf("%d",arr[N-K]);
    return 0; }